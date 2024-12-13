int search(int* nums, int numsSize, int target) {
    int low=0,high=numsSize-1,mid;
    
    while(high>=low)
    {
        mid=low+(high-low)/2;
        if(target==nums[mid])
        return mid;

        else if(nums[low]<=nums[mid])
        {
          if(nums[low] <= target&& target < nums[mid])
          high=mid-1;
          else
          low=mid+1;

        }
        else 
        {
           
           if (nums[mid] < target && target <= nums[high])
           low=mid+1;
           else
           high=mid-1;

        }

    }
  return -1;
}
