class Solution {
    public long smallestNumber(long num) {
        if (num == 0) {
            return 0;
        }

        String n = String.valueOf(Math.abs(num));
        char[] s = n.toCharArray();

        for (int i = 0; i < s.length; i++) {
            for (int j = i + 1; j < s.length; j++) {
                if (num > 0) {
                    if (s[i] > s[j]) {
                        char temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                    }
                } else {
                    if (s[i] < s[j]) {
                        char temp = s[i];
                        s[i] = s[j];
                        s[j] = temp;
                    }
                }
            }
        }
        if (num > 0) {
            int i = 0;
            while (i < s.length && s[i] == '0') {
                i++;
            }
            if (i > 0 && i < s.length) {
                for (int j = 0; j < i; j++) {
                    char temp = s[j];
                    s[j] = s[i];
                    s[i] = temp;
                    break;
                }
            }
        }
        String sortedString = new String(s);
        long result = Long.parseLong(sortedString);
        return num < 0 ? -result : result;
    }
}
