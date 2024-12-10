**Intuition**

The "Guess Number Higher or Lower" problem can be solved using binary search, as the problem inherently involves narrowing down a range based on comparisons. By repeatedly dividing the search space in half, we can quickly zero in on the target number. The guess API provides feedback on whether the guessed number is too high, too low, or correct, guiding our search.

To prevent integer overflow when calculating the midpoint, we use the formula: mid=low+(high-low)/2
​
This ensures correctness even for large values of high and low.

**Approach**

Initialize two variables: low as the smallest number in the range and high as the largest.
Use a while loop to narrow down the range:
Compute mid safely using the overflow-proof formula.

Call the guess(mid) function:

If guess(mid) == 0, return mid (the correct number).

If guess(mid) == -1, adjust the range to exclude numbers greater than mid (high = mid - 1).

If guess(mid) == 1, adjust the range to exclude numbers less than mid (low = mid + 1).

Continue until the number is found.

**Complexity**

Time complexity:O(logn)
The range is halved at each step, so the number of iterations is logarithmic with respect to the input size.

Space complexity:O(1)
The solution uses a constant amount of extra space.
