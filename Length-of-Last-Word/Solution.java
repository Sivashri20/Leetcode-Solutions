class Solution {
    public int lengthOfLastWord(String s) {
        
        s=s.trim();
        int len=s.length();
        int lastIndex=s.lastIndexOf(' ');
        return len-lastIndex-1;
        
    }
}
