// 8_incre.c

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 10;

    printf("INITIAL VALUES\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    /* -----------------------------
       POST-INCREMENT
       a++ : First use value, then increment
    ----------------------------- */
    printf("POST-INCREMENT (a++)\n");
    printf("Value used = %d\n", a++);
    printf("Value after increment = %d\n\n", a);

    /* -----------------------------
       PRE-INCREMENT
       ++a : First increment, then use value
    ----------------------------- */
    printf("PRE-INCREMENT (++a)\n");
    printf("Value used = %d\n", ++a);
    printf("Current value = %d\n\n", a);

    /* -----------------------------
       POST-DECREMENT
       b-- : First use value, then decrement
    ----------------------------- */
    printf("POST-DECREMENT (b--)\n");
    printf("Value used = %d\n", b--);
    printf("Value after decrement = %d\n\n", b);

    /* -----------------------------
       PRE-DECREMENT
       --b : First decrement, then use value
    ----------------------------- */
    printf("PRE-DECREMENT (--b)\n");
    printf("Value used = %d\n", --b);
    printf("Current value = %d\n\n", b);

    /* -----------------------------
       SIZEOF OPERATOR
       Finds memory size (in bytes)
    ----------------------------- */
    printf("SIZEOF OPERATOR\n");
    printf("Size of int a = %zu bytes\n", sizeof(a));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of char = %zu byte\n", sizeof(char));

    return 0;
}


/*
WHY does sizeof need %zu ?

1) What does sizeof return?
   sizeof(int)
   -> It returns a value of type size_t, NOT int.

2) What is size_t?
   - size_t is an UNSIGNED integer type
   - Used to represent sizes in BYTES
   - Its size depends on the system:
       * 32-bit system -> usually 4 bytes
       * 64-bit system -> usually 8 bytes

3) Why NOT use %d ?
   printf("%d", sizeof(int));   // WRONG

   Reason:
   - %d expects an int
   - sizeof returns size_t
   - Mismatched format specifier
   - Can cause WRONG output or UNDEFINED behavior

4) Correct way:
   printf("%zu", sizeof(int));  // CORRECT

   Reason:
   - %zu is the format specifier for size_t
*/