Intuition

The majority element is defined as an element that appears more than ⌊n/2⌋ times in the array, where n is the size of the array. Given the problem guarantees the existence of a majority element, we can leverage this property to find it efficiently.

Approach

Candidate Selection Phase:

Assume the array as a sequence of "votes" where each number represents a "vote" for itself.

1.Start with no candidate (count = 0).

2.Traverse the array, and for each number:

3.If count == 0, set the current number as the candidate.

4.If the current number equals the candidate, increment the count.
Otherwise, decrement the count.

5.By the end of this phase, a candidate for the majority element is guaranteed to be selected.

Verification Phase (Optional):

1.To ensure the candidate is indeed the majority element, count its occurrences in the array.

2.Return the candidate if its count exceeds [n/2⌋.

Why Does It Work?

If an element is the majority element, its frequency is greater than
[n/2⌋, meaning it appears more often than all other elements combined.

During the candidate selection phase:
If the count drops to zero, we "reset" the candidate. The true majority element will still have enough votes left to become the candidate again by the end of the trave

Complexity

Time complexity:O(n)

Space complexity:O(1)
