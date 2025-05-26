#include <stdio.h>
// Typedef volatile int
typedef volatile int vInt;
// Typedef pointer to volatile int
typedef volatile int* vIntPtr;
int main() {
    vInt a = 10;       // volatile int
    vIntPtr p = &a;    // pointer to volatile int
    printf("Value a = %d\n", a);
    *p = 20;           // Write via pointer
    printf("New value a = %d\n", a);
    return 0;
}
