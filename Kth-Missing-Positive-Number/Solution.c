int findKthPositive(int* arr, int arrSize, int k) {
    int i=1,count=0,j=0;
   while(count<k)
   {
    if(j<arrSize && arr[j]==i)
    {
        j++;
    }
    else 
    {
        count++;
        if(count==k)
        return i;
    }
    i++;
  }
   return -1;
}
