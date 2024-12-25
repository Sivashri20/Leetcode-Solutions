Intuition

1.A streak of 1s can be tracked by a counter (count), which increments as long as we encounter 1s.

2.Whenever the streak is broken (i.e., encountering a 0), reset the counter because the current sequence ends.

3.Simultaneously, keep updating the maximum streak (maxcount) observed so far, ensuring we don't lose track of the result.

Approach

1.Initialize Variables:

Use two variables:

count to track the current streak of consecutive 1s.

maxcount to store the maximum streak observed so far.

Iterate Through the Array:

2.For each element in the array:

If the element is 1: Increment count by 1 and update maxcount if count exceeds it.

If the element is 0: Reset count to 0 since the streak is broken.

3.Return the Result:

After completing the iteration, maxcount contains the length of the longest streak of consecutive 1s.

Complexity

Time complexity:O(n)

Space complexity:O(1)
