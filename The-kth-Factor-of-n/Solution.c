int kthFactor(int n, int k) {
    int arr[n], j=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            arr[j++]=i;
        }
        if(j==k)
        return arr[k-1];
    }
   
    return -1;
}
