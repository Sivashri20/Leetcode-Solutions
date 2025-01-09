
Intuition

To find words that start with a given prefix, compare each word's starting characters with the prefix. Increment the count if all prefix characters match the corresponding characters in the word.

Approach

1.Initialize a counter to keep track of words that match the prefix.

2.Iterate through each word in the array.

3.Skip words shorter than the prefix length.

4.Compare the characters of the prefix with the word’s starting characters using a loop.

5.Stop checking further if a mismatch is found.

6.Increment the counter if the word matches the prefix.

7.Return the total count.

Complexity

Time complexity:O(N x L)

Space complexity:O(1)
