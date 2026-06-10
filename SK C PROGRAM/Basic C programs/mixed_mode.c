// mixed_mode.c

#include <stdio.h>
#include <stdbool.h> // For bool type

int main() {
    // --------------------------------------
    // 1. Variable Declarations
    // --------------------------------------
    bool flag = true;          // Boolean type
    char ch = 'A';             // Character type
    short s = 10;              // Short integer
    int i = 20;                // Integer
    long l = 100000L;          // Long integer
    long long ll = 10000000000LL; // Long Long integer
    float f = 3.14f;           // Floating point
    double d = 9.87654321;     // Double precision floating point

    // --------------------------------------
    // 2. Implicit Type Promotion Examples
    // --------------------------------------
    int result1 = ch + s; // char + short promoted to int
    float result2 = i + f; // int promoted to float
    double result3 = f + d; // float promoted to double
    long result4 = l + (long)i; // int promoted to long

    // --------------------------------------
    // 3. Explicit Type Casting
    // --------------------------------------
    double cast1 = (double)i / 3;   // int to double
    int cast2 = (int)f + 5;         // float to int

    // --------------------------------------
    // 4. Arithmetic Operator Precedence
    // --------------------------------------
    int precedence_result = 5 + 3 * 2; // * has higher precedence than +
    int precedence_result2 = (5 + 3) * 2; // parentheses override precedence

    // --------------------------------------
    // 5. Output All Results
    // --------------------------------------
    printf("Boolean value: %d\n", flag);
    printf("Char value: %c\n", ch);
    printf("Short value: %d\n", s);
    printf("Int value: %d\n", i);
    printf("Long value: %ld\n", l);
    printf("Long Long value: %lld\n", ll);
    printf("Float value: %.2f\n", f);
    printf("Double value: %.8lf\n", d);

    printf("\n--- Implicit Type Promotions ---\n");
    printf("char + short (int): %d\n", result1);
    printf("int + float (float): %.2f\n", result2);
    printf("float + double (double): %.8lf\n", result3);
    printf("long + int (long): %ld\n", result4);

    printf("\n--- Explicit Type Casting ---\n");
    printf("int / 3 as double: %.2lf\n", cast1);
    printf("float to int + 5: %d\n", cast2);

    printf("\n--- Operator Precedence ---\n");
    printf("5 + 3 * 2 = %d\n", precedence_result);
    printf("(5 + 3) * 2 = %d\n", precedence_result2);

    return 0;
}

/*

Boolean value: 1
Char value: A
Short value: 10
Int value: 20
Long value: 100000
Long Long value: 10000000000
Float value: 3.14
Double value: 9.87654321

--- Implicit Type Promotions ---
char + short (int): 75
int + float (float): 23.14
float + double (double): 13.01654321
long + int (long): 100020

--- Explicit Type Casting ---
int / 3 as double: 6.67
float to int + 5: 8

--- Operator Precedence ---
5 + 3 * 2 = 11
(5 + 3) * 2 = 16


*/