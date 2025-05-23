#include <stdio.h>
// Define a typedef for a function pointer
typedef int (*Operation)(int, int);
// Define two simple functions
int add(int a, int b) {
    return a + b;
}
int multiply(int a, int b) {
    return a * b;
}
// A function that takes a function pointer as an argument
void calculate(int x, int y, Operation op) {
    printf("Result: %d\n", op(x, y));
}
int main() {
    int a = 5, b = 3;
    // Use the typedef for function pointers
    Operation op1 = add;
    Operation op2 = multiply;
    printf("Using add:\n");
    calculate(a, b, op1);
    printf("Using multiply:\n");
    calculate(a, b, op2);
    return 0;
}
