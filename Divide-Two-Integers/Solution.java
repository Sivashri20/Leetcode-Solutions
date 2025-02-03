class Solution {
    public int divide(int dividend, int divisor) {
         if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }
        long dividend1=(long)dividend;
            long res=dividend1/divisor;
            return (int)res;
              
    }
}
