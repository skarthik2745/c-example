// 1oct_hex_bin.c

#include <stdio.h>

/* Function to print binary */
void printBinary(int num)
{
    int arr[32], i = 0;

    if (num == 0)
    {
        printf("0");
        return;
    }

    while (num > 0)
    {
        arr[i++] = num % 2;
        num /= 2;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", arr[j]);
}

/* Function to print octal */
void printOctal(int num)
{
    int arr[32], i = 0;

    if (num == 0)
    {
        printf("0");
        return;
    }

    while (num > 0)
    {
        arr[i++] = num % 8;
        num /= 8;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", arr[j]);
}

/* Function to print hexadecimal */
void printHex(int num)
{
    int arr[32], i = 0;

    if (num == 0)
    {
        printf("0");
        return;
    }

    while (num > 0)
    {
        arr[i++] = num % 16;
        num /= 16;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        if (arr[j] < 10)
            printf("%d", arr[j]);
        else
            printf("%c", arr[j] + 55); // 10→A, 11→B, ...
    }
}

int main()
{
    int num = 25;
// these functions work for any kind of input number in any format
    printf("Decimal      : %d\n", num);

    printf("Binary       : ");
    printBinary(num);
    printf("\n");

    printf("Octal        : ");
    printOctal(0x19);
    printf("\n");

    printf("Hexadecimal  : ");
    printHex(num);
    printf("\n");

    return 0;
}


Yes. This code manually converts a decimal number into binary, octal, and hexadecimal representations without using format specifiers like %b, %o, or %x.


---

Purpose of the Code

Input:

int num = 25;

Output:

Decimal      : 25
Binary       : 11001
Octal        : 31
Hexadecimal  : 19

The code demonstrates the number system conversion logic often taught in C programming and computer architecture.


---

Logic Behind Binary Conversion

Function:

void printBinary(int num)

Step 1: Repeatedly divide by 2

For 25:

Number	Remainder

25 ÷ 2	1
12 ÷ 2	0
6 ÷ 2	0
3 ÷ 2	1
1 ÷ 2	1


Remainders stored:

1 0 0 1 1

These are obtained from Least Significant Bit (LSB) to Most Significant Bit (MSB).


---

Step 2: Reverse Printing

Array contains:

Index : 0 1 2 3 4
Value : 1 0 0 1 1

Printing backwards:

1 1 0 0 1

Result:

11001


---

Logic Behind Octal Conversion

Function:

void printOctal(int num)

Uses:

num % 8
num /= 8

For 25:

Number	Remainder

25 ÷ 8	1
3 ÷ 8	3


Stored:

1 3

Reverse:

31

So:

25(decimal) = 31(octal)


---

Logic Behind Hexadecimal Conversion

Function:

void printHex(int num)

Uses:

num % 16
num /= 16

For 25:

Number	Remainder

25 ÷ 16	9
1 ÷ 16	1


Stored:

9 1

Reverse:

19

Hence:

25(decimal) = 19(hex)


---

Why arr[j] + 55?

ASCII values:

'A' = 65

For remainder 10:

10 + 55 = 65

which becomes:

A

Similarly:

10 → A
11 → B
12 → C
13 → D
14 → E
15 → F


---

Why Array is Used?

During conversion, remainders come in reverse order.

Example:

25 → 1 0 0 1 1

Need:

11001

So remainders are first stored in an array and then printed backwards.


---

Can We Use Format Specifiers Instead?

For Octal

printf("%o", num);

Output:

31


---

For Hexadecimal

printf("%x", num);

Output:

19

or

printf("%X", num);

Output:

19

(A-F become uppercase if needed)


---

For Binary

Standard C does not provide %b.

So:

printf("%b", num);

❌ Not standard C.

That's why programmers often write functions like printBinary().


---

Practical Version

int num = 25;

printf("Decimal     : %d\n", num);
printf("Octal       : %o\n", num);
printf("Hexadecimal : %X\n", num);

printf("Binary      : ");
printBinary(num);

This is how it is usually done in real projects.


---

Interview/Exam Point

Why write these functions when %o and %x already exist?

Because the goal is to understand the internal conversion algorithm:

Binary → divide by 2

Octal → divide by 8

Hexadecimal → divide by 16


This teaches how computers represent numbers internally, rather than relying on library functions.