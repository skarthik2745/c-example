// signed.c

#include <stdio.h>

int main()
{
    signed int a = 10;
    signed int b = -10;

    unsigned int x = 10;
    unsigned int y = -10;   // Important case

    printf("SIGNED INTEGERS\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("UNSIGNED INTEGERS\n");
    printf("x = %u\n", x);
    printf("y = %u\n", y);

    return 0;
}