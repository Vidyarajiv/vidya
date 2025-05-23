#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char *data;
    int size;
    // Open the file in read mode
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
}
    // Allocate memory
    data = (char *)malloc(size + 1);  // +1 for null terminator
    if (data == NULL) {
        printf("Memory allocation failed.\n");
        fclose(fp);
        return 1;
    }
    // Read file content
    fread(data, 1, size, fp);
    data[size] = '\0';  // Null terminate the string
    // Display content
    printf("File content:\n%s\n", data);
    // Cleanup
    free(data);
    fclose(fp);
    return 0;
}
