void moveZeroes(int* nums, int numsSize) {
   
  int nonZeroIndex = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    while (nonZeroIndex < numsSize) {
        nums[nonZeroIndex++] = 0;
    }
}
