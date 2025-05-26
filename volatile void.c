#include <stdio.h>

void accessHardware(volatile void* addr) {
    // For illustration: cast to a specific type before use
    int value = *(volatile int*)addr;
    printf("Read value: %d\n", value);
}

int main() {
    int hardware_reg = 42;
    accessHardware(&hardware_reg);
    return 0;
}
