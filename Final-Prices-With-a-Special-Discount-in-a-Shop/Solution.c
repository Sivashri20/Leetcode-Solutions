/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int* answer=(int*)malloc(pricesSize*sizeof(int));
    int j;
    for(int i=0;i<pricesSize;i++)

    {
        if(i!=pricesSize-1)
        {
            for(j=i+1;j<pricesSize;j++)
            {
              
              if(prices[j]<=prices[i])
              {
              answer[i]=prices[i]-prices[j];
              break;
              }
              answer[i]=prices[i];
            } 
        }
        else
        answer[i]=prices[i];
     
        
    }
   *returnSize=pricesSize;
   return answer;
}
