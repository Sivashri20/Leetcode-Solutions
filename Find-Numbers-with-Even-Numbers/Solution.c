int findNumbers(int* nums, int numsSize) {
    int div,even=0;
    for (int i=0;i<=numsSize-1;i++)
    {
       int count=0,num=nums[i];
        while(num>0)
        {
         num=num/10;
         count++; 
        }
        if(count%2==0)
        even++;
    } 
    return even;   
}
