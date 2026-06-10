#include <stdio.h>
#include <stdlib.h>   // for strtol()

int main()
{
    /* --------------------------------------------------
       1️⃣ INTEGER LITERALS IN DIFFERENT NUMBER SYSTEMS
       -------------------------------------------------- */

    int dec = 25;        // Decimal (base 10)
    int oct = 031;       // Octal (base 8) -> starts with 0
    int hex = 0x19;      // Hexadecimal (base 16) -> starts with 0x

    printf("DECIMAL VALUE        : %d\n", dec);
    printf("OCTAL VALUE (031)    : %d\n", oct);
    printf("HEXA VALUE (0x19)    : %d\n\n", hex);


    /* --------------------------------------------------
       2️⃣ PRINTING SAME NUMBER IN DIFFERENT FORMATS
       -------------------------------------------------- */

    int num = 100;

    printf("Number in Decimal      : %d\n", num);
    printf("Number in Octal        : %o\n", num);
    printf("Number in Hexadecimal  : %X\n\n", num); // %X → uppercase


    /* --------------------------------------------------
       3️⃣ USING BUILT-IN CONVERSION FUNCTION (strtol)
       -------------------------------------------------- */

    char decStr[] = "509";
    char octStr[] = "62";
    char hexStr[] = "2A";
    char a[]="101";

    int decVal = strtol(decStr, NULL, 10); // base 10
    int octVal = strtol(octStr, NULL, 8);  // base 8
    int hexVal = strtol(hexStr, NULL, 16); // base 16
    int binVal = strtol(a, NULL, 2); // base 2

    printf("Binary \\101 Example:\n");
    printf("Converted Decimal      : %d\n", decVal);
    printf("Converted Octal        : %d\n", octVal);
    printf("Converted Hexadecimal  : %d\n", hexVal);
    printf("Converted Binary       : %d\n\n", binVal);


    /* --------------------------------------------------
       4️⃣ UNSIGNED, LONG, AND SUFFIX EXAMPLES
       -------------------------------------------------- */

    unsigned int u = 100U;
    long int l = 100000L;
    unsigned long int ul = 1000000UL;

    printf("Unsigned Int (U)        : %u\n", u);
    printf("Long Int (L)            : %ld\n", l);
    printf("Unsigned Long Int (UL)  : %lu\n\n", ul);


    /* --------------------------------------------------
       5️⃣ MIXING BASES WITH SUFFIXES
       -------------------------------------------------- */

    unsigned int hexU = 0xFFU;     // Hex + Unsigned
    long int octL = 0777L;         // Octal + Long
    unsigned long int decUL = 50000UL;

    printf("Hex Unsigned (0xFFU)    : %u\n", hexU);
    printf("Octal Long (0777L)      : %ld\n", octL);
    printf("Decimal Unsigned Long   : %lu\n", decUL);

    return 0;
}