Intuition

The problem requires calculating the final price for each item after applying the first subsequent discount. The intuition lies in iterating through the array to find the nearest smaller or equal price and deducting it from the current price. If no discount exists, the price remains unchanged.

Approach

1.Nested Loop Logic:

-Use an outer loop to traverse each item's price.

-Use an inner loop to search for the first subsequent price that is less than or equal to the current price.

-Subtract the found price from the current price and store the result.

2.Dynamic Memory Allocation:

-Allocate memory for the result array dynamically using malloc.

-Handle edge cases like the last item, which has no subsequent prices to check.

3.Return Results:

-Return the final array and update the return size to ensure correct memory handling.

Complexity

Time complexity:O(n²)

Space complexity:O(n)
