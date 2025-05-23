#include <stdio.h>
// Function with a static variable
void callCounter(void) {
    static int count = 0;  // Initialized only once
    count++;               // Retains value between calls
    printf("Function called %d times\n", count);
}
int main(void) {
    callCounter();  // First call
    callCounter();  // Second call
    callCounter();  // Third call
    return 0;
}
