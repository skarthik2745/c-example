// 3_2s_comp.c

#include <stdio.h>
#include <limits.h> // For INT_SIZE if needed

// Function to print binary representation of an integer
void printBinary(unsigned int n) {
    int i;
    int bits = sizeof(int) * 8; // Total bits in an int (usually 32)
    for (i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1); // Shift and mask
    }
}

int main() {
    int num;
    printf("Enter any integer: ");
    scanf("%d", &num);

    printf("Binary representation of %d: ", num);
    printBinary(num); // Prints original binary
    printf("\n");

    if (num >= 0) {
        printf("2's complement of %d: ", num);
        printBinary(~num + 1); // 2's complement for positive number
    } else {
        printf("2's complement of %d: ", num);
        printBinary(num); // Already stored as 2's complement
    }
    printf("\n");

    return 0;
}

/*
----------------------------------------------------
RIGHT SHIFT AND BITWISE AND EXPLANATION
----------------------------------------------------

1) Right Shift Operator (>>)

   (n >> i)

   - >> is the right shift operator.
   - It shifts all bits of number 'n' to the right by 'i' positions.
   - This operation moves the i-th bit to the Least Significant Bit (LSB) position.

   Example:
   n = 10
   Binary of 10:
   00000000 00000000 00000000 00001010

   If i = 3:
   n >> 3 =
   00000000 00000000 00000000 00000001

   - The 4th bit from the right is now at the LSB position.


2) Bitwise AND with 1 (& 1)

   (n >> i) & 1

   - & is the bitwise AND operator.
   - ANDing with 1 extracts ONLY the last bit (LSB).

   Why?
   - Any number AND 1 gives:
       1 & 1 = 1
       0 & 1 = 0

   Example:
   (00000001) & 1 = 1  → bit is 1
   (00000000) & 1 = 0  → bit is 0

   - This gives the value of the i-th bit of the number.


3) Printing the Bit

   printf("%d", (n >> i) & 1);

   - Prints either 0 or 1.
   - Since the loop runs from MSB to LSB,
     the binary number is printed in correct order.


4) Full Example (n = 10)

   Binary of 10:
   00000000 00000000 00000000 00001010

   Loop operation:

   i = 31 → (n >> 31) & 1 → 0
   i = 30 → (n >> 30) & 1 → 0
   ...
   i = 3  → (n >> 3)  & 1 → 1
   i = 2  → (n >> 2)  & 1 → 0
   i = 1  → (n >> 1)  & 1 → 1
   i = 0  → (n >> 0)  & 1 → 0

   Output:
   00000000000000000000000000001010


5) Key Points to Remember

   - Right shift (>>) moves the required bit to LSB.
   - Bitwise AND (& 1) extracts that bit.
   - Looping from MSB to LSB prints correct binary representation.

----------------------------------------------------
*/




No problem. This is one of the most important bit-manipulation concepts in Embedded C.

Let's take a very small example.

Suppose:

n = 13;

Binary of 13:

1101

(Assume only 4 bits for simplicity.)


---

What does >> do?

>> means right shift.

Example:

13 >> 0

1101


---

13 >> 1

0110

The bits move one position to the right.


---

13 >> 2

0011


---

13 >> 3

0001


---

What does & 1 do?

& is Bitwise AND.

Rule:

0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1

When we do:

(number) & 1

we are checking only the last bit.

Example:

6 = 0110

0110
0001
----
0000

Result:

0


---

Example:

7 = 0111

0111
0001
----
0001

Result:

1


---

Now combine both

Take:

n = 13

Binary:

1101


---

i = 3

(13 >> 3)

0001

Now:

0001 & 0001

Result:

1

Printed:

1


---

i = 2

13 >> 2

0011

Now:

0011
0001
----
0001

Result:

1

Printed:

1


---

i = 1

13 >> 1

0110

Now:

0110
0001
----
0000

Result:

0

Printed:

0


---

i = 0

13 >> 0

1101

Now:

1101
0001
----
0001

Result:

1

Printed:

1


---

Final output:

1101

which is exactly the binary representation of 13.


---

Why do we use this trick?

(n >> i) & 1

means:

> "Move bit number i to the last position and then check whether it is 0 or 1."



This extracts a single bit.


---

STM32 Example

Suppose a GPIO register contains:

GPIOA_IDR = 0b10110010

To read bit 5:

(GPIOA_IDR >> 5) & 1

Calculation:

10110010 >> 5

00000101

Now:

00000101
00000001
---------
00000001

Result:

1

Meaning bit 5 is HIGH.


---

One-line Memory Trick

(n >> i) & 1

= Extract the ith bit of n.

This statement is used everywhere in Embedded C, STM32 register programming, UART, SPI, I2C, CAN, and device driver development.