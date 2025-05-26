#include <stdio.h>

void showValue() {
    // This variable is initialized only once, and can't be modified
    static const int value = 100;
    printf("Value: %d\n", value);
    // value = 200;  // error: cannot assign to const variable
}

int main() {
    showValue();
    showValue();
    return 0;
}
