/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* majorityElement(int* nums, int numsSize, int* returnSize) {

    int* result = (int*)malloc(2 * sizeof(int)); 
    int k = 0; 

    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        int alreadyCounted = 0;

        for (int m = 0; m < k; m++) {
            if (nums[i] == result[m]) {
                alreadyCounted = 1;
                break;
            }
        }
        if (alreadyCounted) continue;

   
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > numsSize / 3) {
            result[k++] = nums[i];
            if (k == 2) break;
        }
    }

    *returnSize = k;
    return result;
}

    
