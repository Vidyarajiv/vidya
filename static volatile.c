#include <stdio.h>

// Simulated interrupt flag
void checkFlag() {
    static volatile int interruptFlag = 0;

    // In real embedded system, interruptFlag might be updated by ISR
    if (interruptFlag) {
        printf("Interrupt received!\n");
        interruptFlag = 0;  // Reset flag
    }
}
