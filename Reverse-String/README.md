1.Initialize Two Pointers:

left starts at the beginning of the array (0 index).

right starts at the end of the array (len(s) - 1 index).

2.Swap Characters:

While left < right, swap the characters at s[left] and s[right].

3.Move the Pointers:

Increment left by 1 to move toward the center.

Decrement right by 1 to move toward the center.

4.Repeat Until left >= right:

The loop stops when the pointers meet or cross, indicating that the reversal is complete.
