#include <stdio.h>
// void function to find and print the maximum number in an array
void findMax(const int arr[], int size) {
    if (size <= 0) {
        printf("Array is empty.\n");
        return;
    }
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum number in the array: %d\n", max);
}
int main(void) {
    int numbers[] = {10, 25, 3, 7, 50, 18};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    findMax(numbers, size);  // Call the void function
    return 0;
}
