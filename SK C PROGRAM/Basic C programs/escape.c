#include <stdio.h>

int main() {
    // Newline
    printf("Hello\\nWorld Example:\n");
    printf("Hello\nWorld\n\n");

    // Horizontal tab
    printf("Hello\\tWorld Example:\n");
    printf("Hello\tWorld\n\n");

    // Backslash
    printf("Backslash \\\\ Example:\n");
    printf("This is a backslash: \\\n\n");

    // Single quote
    printf("Single quote \\\' Example:\n");
    printf("This is a single quote: \'\n\n");

    // Double quote
    printf("Double quote \\\" Example:\n");
    printf("This is a double quote: \"\n\n");

    // Question mark
    printf("Question mark \\? Example:\n");
    printf("This is a question mark: ?\n\n");

    // Alert (bell)
    printf("Alert \\a Example:\n");
    printf("This will make a beep sound (if supported): \a\n\n");

    // Backspace
    printf("Backspace \\b Example:\n");
    printf("Hello\bWorld\n\n"); // 'o' in Hello is removed

    // Carriage return
    printf("Carriage return \\r Example:\n");
    printf("12345\rABCDE\n\n"); // Overwrites the beginning of the line

    // Vertical tab
    printf("Vertical tab \\v Example:\n");
    printf("Hello   \vWorld\n\n");

    // Form feed
    printf("Form feed \\f Example:\n");
    printf("Hello\fWorld\n\n");

    // Octal value
    printf("Octal \\ooo Example:\n");
    printf("Character with octal 101: \101\n\n"); // A

    // Hexadecimal value
    printf("Hexadecimal \\xhh Example:\n");
    printf("Character with hex 41: \x41\n\n"); // A

    return 0;
}