// 2getch.c

#include <stdio.h>
#include <conio.h>

int main()
{
    char ch1, ch2;

    printf("Press a key (getch): ");
    ch1 = getch();   // character NOT shown
    printf("\nYou pressed: %c\n\n", ch1);

    printf("Press a key (getche): \n");
    ch2 = getche();  // character IS shown
    printf("\nYou pressed: %c\n", ch2);

    return 0;
}



Press a key (getch):
You pressed: A

Press a key (getche):
B
You pressed: B