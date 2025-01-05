Intuition


The problem is to determine the length of the last word in a given string. A word is defined as a sequence of non-space characters. To achieve this, we can break the problem into three steps:

1.Ignore Extra Spaces: Start by handling any trailing spaces, ensuring the last word is properly positioned at the end of the string.

2.Identify the Last Word: Locate the starting position of the last word by finding the last space in the processed string.

3.Measure the Length: Use the difference between the total string length and the position of the last space to calculate the length of the last word.

Approach

1.Clean the Input: Handle any leading or trailing spaces in the string.

2.Find the Boundary: Identify the position of the last separator (e.g., a space) in the cleaned string to determine where the last word begins.

3.Compute the Result: Use the difference between the total length and the boundary position to find the length of the last word.

Complexity

Time complexity:O(n)

Space complexity:O(1)
