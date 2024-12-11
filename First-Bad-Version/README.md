**Intuition**

Every version after the first bad version is bad so the task is to find the first bad.
Once a bad version occurs there is not gonna be any good version after it.

**Approach**

Use binary search and check if the mid is bad or good
If bad,high=mid-1 to check elements in the first half
If good,low=mid+1 since the bad is not in the first half
Repeat the process until one element is left and the loop terminates
Return low

**Complexity**

Time complexity:O(log n)

Space complexity:O(1)
