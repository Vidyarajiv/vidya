#include <stdio.h>
void demo() {
     int *ptr;
    static int value = 10;
     ptr = &value;
    printf("Value: %d\n", *ptr);
    (*ptr)++;
}
int main() {
    demo();  // prints 10
    demo();  // prints 11
    demo();  // prints 12
    return 0;
}
