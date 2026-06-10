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