// number_conversion.c
#include <stdio.h>
#include <stdlib.h>

/* Function to print a number in binary */
void printBinary(int num)
{ // prints binary rep of  decimal number 
    int binary[32], i = 0;

    if (num == 0) // binary of 0 is 0
    {
        printf("0");
        return;
    }

    while (num > 0) // repeated division by 2 
    {
        binary[i++] = num % 2;
        num /= 2;
    }

    for (int j = i - 1; j >= 0; j--)  // reverse printing  // 5-1=4  : i-1
        printf("%d", binary[j]);
}

int main()
{
    printf("=============================================\n");
    printf("        NUMBER SYSTEM CONVERSIONS\n");
    printf("=============================================\n\n");

    /* --------------------------------------------------
       1️⃣ DECIMAL TO ALL
       -------------------------------------------------- */
    int dec = 25;

    printf("---- DECIMAL TO ALL ----\n");
    printf("Decimal       : %d\n", dec);
    printf("Binary        : ");
    printBinary(dec);
    printf("\n");
    printf("Octal         : %o\n", dec);
    printf("Hexadecimal   : %X\n\n", dec);


    /* --------------------------------------------------
       2️⃣ BINARY TO ALL
       -------------------------------------------------- */
    char binStr[] = "11001";   // Binary of 25
    int binDec = strtol(binStr, NULL, 2);

    printf("---- BINARY TO ALL ----\n");
    printf("Binary        : %s\n", binStr);
    printf("Decimal       : %d\n", binDec);
    printf("Octal         : %o\n", binDec);
    printf("Hexadecimal   : %X\n\n", binDec);


    /* --------------------------------------------------
       3️⃣ OCTAL TO ALL
       -------------------------------------------------- */
    char octStr[] = "31";   // Octal of 25
    int octDec = strtol(octStr, NULL, 8);

    printf("---- OCTAL TO ALL ----\n");
    printf("Octal         : %s\n", octStr);
    printf("Decimal       : %d\n", octDec);
    printf("Binary        : ");
    printBinary(octDec);
    printf("\n");
    printf("Hexadecimal   : %X\n\n", octDec);


    /* --------------------------------------------------
       4️⃣ HEXADECIMAL TO ALL
       -------------------------------------------------- */
    char hexStr[] = "19";   // Hex of 25
    int hexDec = strtol(hexStr, NULL, 16);

    printf("---- HEXADECIMAL TO ALL ----\n");
    printf("Hexadecimal   : %s\n", hexStr);
    printf("Decimal       : %d\n", hexDec);
    printf("Binary        : ");
    printBinary(hexDec);
    printf("\n");
    printf("Octal         : %o\n\n", hexDec);


    printf("=============================================\n");
    printf("        END OF CONVERSION PROGRAM\n");
    printf("=============================================\n");

    return 0;
}