/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    
    int* arr=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
    arr[i]=nums[i]; 
    
    }
    
    for(int z=1;z<=k;z++)
    {
       int min=arr[0],j,minIndex=0;
    for(j=0;j<numsSize;j++)
    {
        
        if(arr[j]<min)
        {
        min=arr[j]; 
        minIndex=j;
        
         }
    }
     arr[minIndex]=multiplier*min;
     }
    *returnSize = numsSize;
    return arr;
    
}
