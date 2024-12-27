Intuition

The problem requires identifying the extra character added to string t. By leveraging the properties of the XOR operation:

1.XOR of a number with itself is 0 (a ^ a = 0).

2.XOR of a number with 0 is the number itself (a ^ 0 = a).

When we XOR all characters in both strings, the characters in s cancel out with their matches in t. The remaining result is the extra character in t.

Approach

1.Initialize a variable result to 0.

2.Iterate over all characters in both strings s and t:

3.XOR the current character with result.

4.After processing, result will hold the ASCII value of the extra character.

5.Convert result back to a character using (char).

Complexity

Time complexity:O(n)

Space complexity:O(1)
