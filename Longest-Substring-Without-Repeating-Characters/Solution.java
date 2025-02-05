class Solution {
    public int lengthOfLongestSubstring(String s) {
        int[] charIndex = new int[128]; // Stores last seen index of characters (ASCII size)
        int maxLength = 0;
        int left = 0; // Left pointer of the sliding window

        for (int right = 0; right < s.length(); right++) {
            char currentChar = s.charAt(right);
            
            // If character is already seen, move left pointer forward
            if (charIndex[currentChar] > 0) {
                left = Math.max(left, charIndex[currentChar]);
            }

            // Update maxLength for current window size
            maxLength = Math.max(maxLength, right - left + 1);
            
            // Store the next available position of this character (1-based index)
            charIndex[currentChar] = right + 1;
        }

        return maxLength;
    }
}
