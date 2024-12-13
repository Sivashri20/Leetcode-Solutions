**Intuition**


When the problem involves searching for an element in a rotated sorted array, the first thought that comes to mind is utilizing binary search due to its efficiency in sorted arrays. However, since the array is rotated, we need to account for the discontinuity in order. The goal is to determine which part of the array is sorted and then decide whether the target lies in that part.

**Approach**


1. Determine the Sorted Portion:

2. Check if the left half (nums[low] to nums[mid]) is sorted (nums[low] <= nums[mid]). Otherwise, the right half is sorted.
Narrow Down the Search:

3. If the left half is sorted:
Adjust high if the target is within nums[low] to nums[mid]. Otherwise, adjust low.

4. If the right half is sorted:
Adjust low if the target is within nums[mid] to nums[high].
Otherwise, adjust high.
Return the Result:

Return the index if the target is found, otherwise -1.

**Complexity**


Time complexity1:
O(logn)


Space complexity:
0(1)
