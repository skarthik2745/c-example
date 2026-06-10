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