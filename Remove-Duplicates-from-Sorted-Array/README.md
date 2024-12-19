Intuition

The problem leverages the fact that the array is sorted, meaning duplicates will always appear consecutively. This allows us to iterate through the array and check for changes in value to identify unique elements. The task can be optimized using a two-pointer approach, where one pointer keeps track of the position to store the next unique element, and the other pointer iterates through the array to find new unique values.

Approach

1)Initialization:

Use two pointers: i (slow pointer) and j (fast pointer).
i tracks the position for the next unique element, starting at the first element (index 0).
j iterates through the array, starting from the second element (index 1).

2)Iterate and Update:

For each element nums[j]:
If nums[j] != nums[i], a new unique element is found.
Increment i and copy nums[j] to nums[i] to place the unique element in its correct position.

3)Result:

After processing all elements, the first i + 1 elements in the array contain all the unique values in their original order.
Return i + 1 as the count of unique elements.

Complexity

Time complexity:

O(n): The array is traversed once using a single loop, where n is the size of the array.

Space complexity:

O(1): The array is modified in-place without using any additional data structures.
