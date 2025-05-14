#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int choice = 3; 
    switch (choice) {
        case 0:
            printf("Value: %d\n", arr[0]);
            break;
        case 1:
            printf("Value: %d\n", arr[1]);
            break;
        case 2:
            printf("Value: %d\n", arr[2]);
            break;
        case 3:
            printf("Value: %d\n", arr[3]);
            break;
        case 4:
            printf("Value: %d\n", arr[4]);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}