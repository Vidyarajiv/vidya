#include <stdio.h>
// Define math operations
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b != 0) return a / b;
    else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}
// Function that takes another function as an argument
void calculate(int x, int y, int (*operation)(int, int)) {
    int result = operation(x, y);
    printf("Result: %d\n", result);
}
int main() {
    int a, b, choice;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Choose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    // Choose the appropriate function
    switch (choice) {
        case 1:
            calculate(a, b, add);
            break;
        case 2:
            calculate(a, b, subtract);
            break;
        case 3:
            calculate(a, b, multiply);
            break;
        case 4:
            calculate(a, b, divide);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}
