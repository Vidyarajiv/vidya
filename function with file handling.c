#include <stdio.h>
// Function to write data to a file
void writeToFile(const char *filename) {
    FILE *fp = fopen(filename, "w");  // Open for writing 
    if (fp == NULL) {
        printf("Error: Cannot open file for writing.\n");
        return;
    }
    fprintf(fp, "Hello from file!\n");
    fprintf(fp, "This is a test.\n");
    fclose(fp);  // Always close the file
    printf("Data written to file successfully.\n");
}
// Function to read data from a file
void readFromFile(const char *filename) {
    FILE *fp = fopen(filename, "r");  // Open for reading
    char ch;
    if (fp == NULL) {
        printf("Error: Cannot open file for reading.\n");
        return;
    }
    printf("Reading file content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  // Print character to console
    }
    fclose(fp);  // Always close the file
}
int main(void) {
    const char *filename = "example.txt";
    writeToFile(filename);   // Call function to write
    readFromFile(filename);  // Call function to read
    return 0;
}
