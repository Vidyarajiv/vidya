#include <stdio.h>

int main() {
    const int choice = 1;

    switch (choice) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        default:
            printf("Other\n");
    }

    return 0;
}
