#include <stdio.h>
void process(volatile int status) {
    switch (status) {
        case 0:
            printf("Status is zero.\n");
            break;
        case 1:
            printf("Status is one.\n");
            break;
        default:
            printf("Unknown status.\n");
    }
}

int main() {
    volatile int sensor_status = 1; // Could be changed outside normal flow
    process(sensor_status);
    return 0;
}
