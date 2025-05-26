#include <stdio.h>
// Define 'FuncPtr' as a type alias for a pointer to a function
// that takes no parameters and returns void
typedef void (*FuncPtr)(void);
// A simple function matching the FuncPtr signature
void greet() {
    printf("Hello from function pointer!\n");
}
int main() {
    // Declare a function pointer 'f' of type FuncPtr
    // and initialize it to point to the 'greet' function
    FuncPtr f = greet;
    // Call the function through the function pointer
    f();
    return 0;
}
