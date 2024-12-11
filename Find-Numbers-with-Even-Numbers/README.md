**Intuition**

If a number is divible by 10 for an even nuumber of times,then it has even number of digits else it has odd number of digits.

**Approach**

Traverse the array.

Reset count to 0,copy the value of the element to a variable.

Repeat dividing the number by 10 and update the divisor as the number until it is greater than zero.

Update count value.

Exit the loop and check if count is an even number.
If yes,update number of even elements(even).

After traversing through final element return the even.

**Complexity**

Time complexity:O(n.d)

n-number of elements in the array

d-digits in each elements

Space complexity:O(1)
