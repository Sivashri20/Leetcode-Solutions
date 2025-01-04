Intuition

To find the first unique character in a string, we can use a frequency counting approach. By counting how many times each character appears, we can identify the first character that only appears once. This approach efficiently solves the problem in two passes over the string, making it optimal for large inputs.

Approach

1.Frequency Counting (First Pass):

--Create an integer array alph[] of size 26 to store the frequency of each lowercase English letter (from 'a' to 'z').

--Traverse the string and for each character, increment its corresponding position in the alph[] array. For example, for character 'a', increment alph[0].

2.Finding the First Unique Character (Second Pass):

--After counting the frequencies, iterate over the string again.

--For each character, check its frequency in alph[]. If the frequency is 1, that means it's the first unique character, and we return its index.

--If no unique character is found, return -1.

Complexity

Time complexity:O(n)

Space complexity:O(1)
