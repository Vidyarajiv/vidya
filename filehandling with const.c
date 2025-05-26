#include <stdio.h>
// Function to print contents of a file; file name is const
void printFileContents(const char* filename) {
    // Open file in read mode ("r") - file pointer is FILE*, 
    // but we treat the filename as const (won't modify it)
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return;
    }
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}
int main() {
    const char* filename = "example.txt";  // filename won't be changed
    printFileContents(filename);
    return 0;
}
