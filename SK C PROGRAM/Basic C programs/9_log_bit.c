// 9_log_bit.c

#include <stdio.h>

int main()
{
    // Declare two integer variables
    int x = 5;
    int y = 3;

    // Print the values
    printf("x = %d, y = %d\n\n", x, y);

    /* ---------------------------
       LOGICAL OPERATORS
       && : logical AND
       || : logical OR
       !  : logical NOT
    ---------------------------- */
    printf("LOGICAL OPERATORS\n");
    printf("x && y = %d\n", x && y); // 1 if both non-zero, else 0
    printf("x || y = %d\n", x || y); // 1 if any is non-zero, else 0
    printf("!x = %d\n", !x);         // 0 if x is non-zero, 1 if x is zero
    printf("!y = %d\n\n", !y);       // 0 if y is non-zero, 1 if y is zero

    /* ---------------------------
       BITWISE OPERATORS
       &  : bitwise AND
       |  : bitwise OR
       ^  : bitwise XOR
       ~  : bitwise NOT
       << : left shift
       >> : right shift
    ---------------------------- */
    printf("BITWISE OPERATORS\n");
    printf("x & y = %d\n", x & y);   // AND each bit of x and y
    printf("x | y = %d\n", x | y);   // OR each bit of x and y
    printf("x ^ y = %d\n", x ^ y);   // XOR each bit of x and y
    printf("~x = %d\n", ~x);         // Flip all bits of x
    printf("~y = %d\n", ~y);         // Flip all bits of y
    printf("x << 1 = %d\n", x << 1); // Shift bits of x left by 1 (multiply by 2)
    printf("y >> 1 = %d\n", y >> 1); // Shift bits of y right by 1 (divide by 2)

    return 0;
}

/*
EXPECTED OUTPUT:

x = 5, y = 3

LOGICAL OPERATORS
x && y = 1
x || y = 1
!x = 0
!y = 0

BITWISE OPERATORS
x & y = 1
x | y = 7
x ^ y = 6
~x = -6
~y = -4
x << 1 = 10
y >> 1 = 1
*/