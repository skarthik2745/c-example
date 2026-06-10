// 7_scan_width.c

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter four numbers:\n");
    printf("a → max 3 digits\n");
    printf("b → max 2 digits\n");
    printf("c → max 1 digit\n");
    printf("d → normal integer\n\n");

    /*
       %3d → reads only 3 digits
       %2d → reads only 2 digits
       %1d → reads only 1 digit
       %d  → reads full integer
    */
    scanf("%3d %2d%1d%d", &a, &b, &c, &d);

    printf("\nValues read by scanf():\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}

/* 
8
666666

and 

8 666666 

both are same */