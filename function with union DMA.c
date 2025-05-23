#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union Data {
    int i;
    float f;
    char *str;
};
// Function to print union data based on type
void printUnion(union Data *d, int type) {
    switch (type) {
        case 1:
            printf("Integer: %d\n", d->i);
            break;
        case 2:
            printf("Float: %.2f\n", d->f);
            break;
        case 3:
            printf("String: %s\n", d->str);
            break;
        default:
            printf("Unknown type.\n");
    }
}
int main() {
    union Data *d;
    int choice;
    // Allocate memory for union
    d = (union Data *)malloc(sizeof(union Data));
    if (d == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
}
    printf("Choose data type to store:\n");
    printf("1. Integer\n2. Float\n3. String\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter an integer: ");
            scanf("%d", &d->i);
            break;
        case 2:
            printf("Enter a float: ");
            scanf("%f", &d->f);
            break;
        case 3:
            d->str = (char *)malloc(100 * sizeof(char));  // allocate memory for string
            if (d->str == NULL) {
                printf("Memory allocation failed.\n");
                free(d);
                return 1;
            }
            printf("Enter a string: ");
            scanf(" %[^\n]", d->str);  // read string with spaces
            break;
        default:
            printf("Invalid choice.\n");
            free(d);
            return 1;
    }
    // Call function to print the union value
    printUnion(d, choice);
    // Free allocated memory
    if (choice == 3) {
        free(d->str);  // free string memory if allocated
    }
    free(d);  // free union memory
    return 0;
}
