#include <stdio.h>

void menu() {
    static int option = 1;  // Static variable retains value between calls

    switch (option) {
        case 1:
            printf("Option 1 selected.\n");
            option = 2;  // Change for next call
            break;
        case 2:
            printf("Option 2 selected.\n");
            option = 3;
            break;
        case 3:
            printf("Option 3 selected.\n");
            option = 1;
            break;
        default:
            printf("Invalid option.\n");
    }
}

int main() {
    menu();  // Option 1
    menu();  // Option 2
    menu();  // Option 3
    menu();  // Back to Option 1
    return 0;
}
