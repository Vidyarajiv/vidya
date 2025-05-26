#include <stdio.h>
// Simulate a hardware status register (read-only but can change)
const volatile int hardware_status = 1;
void checkStatus() {
    // Always read the value fresh, never optimize it away
    if (hardware_status == 2) {
        printf("Status: OK\n");
    } else {
        printf("Status: NOT OK\n");
    }
}
int main() {
    checkStatus();
    return 0;
}
