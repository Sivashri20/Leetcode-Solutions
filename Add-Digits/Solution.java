class Solution {
    public int addDigits(int num) {
        int rem,sum=0;
        if(num<10)
        return num;
        while(num>=10)
        {
            sum=0;
        while(num!=0)
        {
            rem=num%10;
            num=num/10;
            sum=sum+rem;   
        }
        num=sum;
        }
       return sum;
    }
}
