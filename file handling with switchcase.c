#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* file;
    int choice;
    char filename[100];
    char data[100];
    printf("Enter file name: ");
    scanf("%s", filename);
    printf("\nMenu:\n");
    printf("1. Write to file\n");
    printf("2. Read from file\n");
    printf("3. Append to file\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); // To consume newline left by scanf
    switch (choice) {
        case 1:  // Write
            file = fopen(filename, "w");
            if (file == NULL) {
                printf("Unable to open file for writing.\n");
                break;
            }
            printf("Enter text to write: ");
            fgets(data, sizeof(data), stdin);
            fputs(data, file);
            fclose(file);
            printf("Data written successfully.\n");
            break;

        case 2:  // Read
            file = fopen(filename, "r");
            if (file == NULL) {
                printf("Unable to open file for reading.\n");
                break;
            }
            printf("File contents:\n");
            while (fgets(data, sizeof(data), file)) {
                printf("%s", data);
            }
            fclose(file);
            break;

        case 3:  // Append
            file = fopen(filename, "a");
            if (file == NULL) {
                printf("Unable to open file for appending.\n");
                break;
            }
            printf("Enter text to append: ");
            fgets(data, sizeof(data), stdin);
            fputs(data, file);
            fclose(file);
            printf("Data appended successfully.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;
}
