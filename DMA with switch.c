#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice;
    void* ptr = NULL;  // Generic pointer
    int i;
    printf("Choose data type to allocate memory for:\n");
    printf("1. Integer\n2. Float\n3. Character\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            ptr = malloc(5 * sizeof(int));
            if (ptr == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }
            for (i = 0; i < 5; i++) {
                ((int*)ptr)[i] = i * 10;
            }
            printf("Integer array: ");
            for (i = 0; i < 5; i++) {
                printf("%d ", ((int*)ptr)[i]);
            }
            break;
        case 2:
            ptr = malloc(5 * sizeof(float));
            if (ptr == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }
            for (i = 0; i < 5; i++) {
                ((float*)ptr)[i] = i * 1.1f;
            }
            printf("Float array: ");
            for (i = 0; i < 5; i++) {
                printf("%.2f ", ((float*)ptr)[i]);
            }
            break;
        case 3:
            ptr = malloc(5 * sizeof(char));
            if (ptr == NULL) {
                printf("Memory allocation failed!\n");
                return 1;
            }
            for (i = 0; i < 5; i++) {
                ((char*)ptr)[i] = 'A' + i;
            }
            printf("Character array: ");
            for (i = 0; i < 5; i++) {
                printf("%c ", ((char*)ptr)[i]);
            }
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }
 // Free memory
    free(ptr);
    return 0;
}
