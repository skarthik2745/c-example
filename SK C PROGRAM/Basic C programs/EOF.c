//EOF.c

#include <stdio.h>

int main() {
    int ch;

    printf("Enter text (press Ctrl+Z then Enter to end input on Windows):\n");

    // Reads and prints  characters until EOF is encountered
    while ((ch = getchar()) != EOF) {
        putchar(ch); // Print each character
    }

    printf("\nEnd of input detected (EOF).\n");

    return 0;
}