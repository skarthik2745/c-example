// 6_chaacter_set.c

#include <stdio.h>

int main()
{
    char line[80];

    /* Ask user for input */
    printf("Enter a phrase (CAPITAL letters only): ");

    /*
       %[A-Z ] means:
       - Accept only characters from A to Z
       - Space is also allowed
       - Reading stops when any other character is found
    */
    scanf("%[ABCDEFGHIJKLMNOPQRSTUVWXYZ]", line);

    /* Display the input */
    printf("\nThe phrase you had typed in was: %s\n", line);

    return 0;
}