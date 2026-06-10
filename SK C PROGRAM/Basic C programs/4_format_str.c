// 4_format_str.c

#include <stdio.h>

int main() {

    /* Integer types */
    int a = 25;
    unsigned int b = 50;
    short int c = -10;
    long int d = 123456789;

    /* Floating point types */
    float x = 3.14159f;
    double y = 123.456789;

    /* Character and string */
    char ch = 'A';
    char name[] = "Karthik";

    /* Integer format specifiers */
    printf("Signed  integer (%%d): %d\n", a);          // %d → signed integer
    printf("Unsigned integer (%%u): %u\n", b);        // %u → unsigned integer
    printf("Short integer (%%hd): %hd\n", c);         // %hd → short int
    printf("Long integer (%%ld): %ld\n", d);          // %ld → long int

    /* Floating point format specifiers */
    printf("Float value (%%f): %f\n", x);             // %f → float
    printf("Float with 2 decimals (%%.2f): %.2f\n", x);
    printf("Double value (%%lf): %lf\n", y);          // %lf → double
    printf("Scientific notation (%%e): %e\n", y);    // %e → exponential

    /* Character and string format specifiers */
    printf("Character (%%c): %c\n", ch);              // %c → character
    printf("String (%%s): %s\n", name);               // %s → string

    /* Number system format specifiers */
    printf("Decimal (%%d): %d\n", a);                 // Decimal
    printf("Octal (%%o): %o\n", a);                   // %o → octal
    printf("Hexadecimal (%%x): %x\n", a);             // %x → hexadecimal (lowercase)
    printf("Hexadecimal (%%X): %X\n", a);             // %X → hexadecimal (uppercase)

    /* Pointer format specifier */
    printf("Address of a (%%p): %p\n", &a);           // %p → pointer address

    /* Special format specifiers */
    printf("Percentage sign (%%%%): %%\n");           // %% → prints %

    /* Width and alignment */
    printf("Width example (%%5d): %5d\n", a);         // Minimum width
    printf("Left aligned (%%-5d): %-5dEND\n", a);     // Left alignment

    return 0;
}