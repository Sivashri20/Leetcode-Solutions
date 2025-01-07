Intuition

Since i<j<k,we could use three nested loops.

Approach

Brute Force Approach

1.for i loop,traverse from 0 to numsSize.

2.for j loop,traverse from i+1 to numsSize,if the condition nums[j] - nums[i] == diff turns out to be true, enter to k loop.

3.for k loop,traverse from j+1 to numsSize,if the condition nums[k] - nums[j] == diff is true,increment count.

4.return count when exited from all loops.

Complexity

Time complexity:O(n³)

Space complexity:O(1)
