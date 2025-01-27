class Solution {
    public boolean isBalanced(String num) {
     int len=num.length(),res1=0,res2=0;
     for(int i=0;i<len;i++)
     {
        if(i%2==0)
        res1+=(num.charAt(i)-'0');
        else
        res2+=(num.charAt(i)-'0');
     }  
     return res1==res2;
    }
}
