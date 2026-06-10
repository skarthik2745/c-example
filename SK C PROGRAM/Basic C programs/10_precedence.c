// 10_precedence.c

#include <stdio.h>

int main() {
    // --------------------------------------
    // 1. Operator Precedence Examples
    // --------------------------------------
    
    int a = 5, b = 3, c = 2, d;
    
    // Multiplication (*) has higher precedence than addition (+)
    d = a + b * c; // evaluated as 5 + (3*2)
    printf("d = a + b * c = %d\n", d);
    
    // Parentheses override precedence
    d = (a + b) * c; // evaluated as (5+3)*2
    printf("d = (a + b) * c = %d\n", d);
    
    // Division and multiplication have same precedence, evaluated left-to-right
    d = a * b / c; // evaluated as (5*3)/2
    printf("d = a * b / c = %d\n", d);
    
    // Addition and subtraction have same precedence, evaluated left-to-right
    d = a + b - c; // evaluated as (5+3)-2
    printf("d = a + b - c = %d\n", d);
    
    // Mixing relational and arithmetic operators
    int x = 10, y = 20, z = 5;
    int result;
    
    // Relational operators (<, >) have lower precedence than arithmetic
    result = x + y > z; // evaluated as (10+20) > 5
    printf("result = x + y > z = %d\n", result); // 1 (true)
    
    // Logical operators: && higher than ||
    int p = 1, q = 0, r = 1;
    int logic_result = p || q && r; // evaluated as p || (q && r)
    printf("logic_result = p || q && r = %d\n", logic_result); // 1 (true)
    
    // Using parentheses to change logical evaluation
    logic_result = (p || q) && r; // evaluated as (p||q) && r
    printf("logic_result = (p || q) && r = %d\n", logic_result); // 1 (true)

    return 0;
}
/*

d = a + b * c = 11
d = (a + b) * c = 16
d = a * b / c = 7
d = a + b - c = 6
result = x + y > z = 1
logic_result = p || q && r = 1
logic_result = (p || q) && r = 1

*/