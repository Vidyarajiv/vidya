#include <stdio.h>

void processOption(int option) {
    switch (option) {
        case 1:
            printf("Option 1 selected\n");
            break;
        case 2:
            printf("Option 2 selected\n");
            break;
        default:
            printf("Invalid option\n");
    }
}

int main() {
    processOption(2);
    return 0;
}
