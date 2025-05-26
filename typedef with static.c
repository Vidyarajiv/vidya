#include <stdio.h>
// Define a type alias
typedef float decimal;
void countCalls() {
    static int count = 0;  // static variable retains value between calls
    count++;
    printf("Function called %d times.\n", count);
}
int main() {
    // Using typedef type with static
    static decimal pi = 3.14;
    printf("Value of pi: %.2f\n", pi);
    // Call function multiple times
    countCalls();
    countCalls();
    countCalls();
    return 0;
}
