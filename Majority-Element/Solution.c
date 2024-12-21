int majorityElement(int* nums, int numsSize) {
    int candidate = 0;
    int count = 0;

    
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
 
    count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > numsSize / 2) {
        return candidate;
    }

    return -1; 
}
