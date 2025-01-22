class Solution {
    public int scoreOfString(String s) {
        int len=s.length(),num1,num2,abs,sum=0,diff;
        for(int i=0;i<len-1;i++)
        {
            char a=s.charAt(i);
            num1=(int)a;
            char b=s.charAt(i+1);
            num2=(int)b;
            diff=num1-num2;
            abs=Math.abs(diff);
            sum=sum+abs;
        }
        return sum;
    }
}
