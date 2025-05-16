#include <stdio.h>
int main() {
    volatile int value = 5;
    volatile int *ptr = &value;
    printf("Initial value: %d\n", *ptr);
    *ptr = 10;
    printf("Changed value: %d\n", *ptr);
    int next=30;
    ptr=&next;  //here address is volatile 
    printf("Now ptr points to: %d\n", *ptr);
    return 0;
}
