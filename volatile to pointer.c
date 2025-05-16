#include <stdio.h>
void print_volatile(volatile int *ptr) {
    printf("Value: %d\n", *ptr);
}
int main() {
    volatile int data = 99;
    print_volatile(&data);
    return 0;
}
