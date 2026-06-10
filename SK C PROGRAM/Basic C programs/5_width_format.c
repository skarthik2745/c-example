// 5_width_format.c

#include <stdio.h>

int main() {

    int num = 123;

    /* Right alignment (default behavior) */
    printf("Right aligned (%%5d)  : '%5d'\n", num);
    printf("Right aligned (%%10d) : '%10d'\n", num);

    /* Left alignment using minus sign */
    printf("Left aligned (%%-5d)  : '%-5d'\n", num);
    printf("Left aligned (%%-10d) : '%-10d'\n", num);

    int numm;

    /* Using width in scanf */
    printf("Enter a number (try entering more than 3 digits): ");
    scanf("%3d", &numm);   // Reads ONLY 3 digits

    printf("\n--- PRINTF WIDTH FORMATTING ---\n");

    /* Right alignment (default) */
    printf("Right aligned (%%5d)  : '%5d'\n", numm);
    printf("Right aligned (%%10d) : '%10d'\n", numm);
    /* Left alignment */
    printf("Left aligned (%%-5d)  : '%-5d'\n", numm);
    printf("Left aligned (%%-10d) : '%-10d'\n", numm);


    return 0;
}