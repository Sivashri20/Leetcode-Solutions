1. Iterative Approach (Java Code)
   
How it works:

*Break the number into digits:

Use % 10 to get the last digit of the number.

Use / 10 to remove the last digit from the number.

*Add the digits together:

Repeat the above steps until all digits of the number are added.

*Repeat until the number is a single digit:

Keep replacing the number with the sum of its digits and repeat the process until the number has only one digit.

2. Mathematical Approach (C Code)

How it works:

This method uses the digital root formula to calculate the result in constant time. The digital root is based on properties of numbers in modulo arithmetic:

*If num == 0, the result is 0.

*If num % 9 != 0, the result is num % 9.

*If num % 9 == 0, the result is 9 (except when num is 0).
