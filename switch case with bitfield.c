#include <stdio.h>
struct Flags {
    unsigned int mode : 2;  // Can hold values 0 to 3
};
void handle(struct Flags f) {
    switch (f.mode) {
        case 0:
            printf("Mode 0: Idle\n");
            break;
        case 1:
            printf("Mode 1: Active\n");
            break;
        case 2:
            printf("Mode 2: Sleep\n");
            break;
        case 3:
            printf("Mode 3: Error\n");
            break;
        default:
            printf("Unknown mode\n");
    }
}
int main() {
    struct Flags f = { .mode = 2 };
    handle(f);
    return 0;
}
