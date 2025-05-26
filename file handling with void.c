#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Function to write any block of data to a file
void writeToFile(const char* filename, void* data, size_t size) {
    FILE* file = fopen(filename, "wb");  // Open in binary write mode
    if (!file) {
        perror("Error opening file");
        return;
    }
    fwrite(data, size, 1, file);  // Write block of data
    fclose(file);
}
// Function to read data into a buffer
void readFromFile(const char* filename, void* buffer, size_t size) {
    FILE* file = fopen(filename, "rb");  // Open in binary read mode
    if (!file) {
        perror("Error opening file");
        return;
    }
    fread(buffer, size, 1, file);  // Read block of data
    fclose(file);
}
int main() {
    const char* filename = "data.bin";
    // Example data
    int numbers[] = {10, 20, 30, 40, 50};
    size_t dataSize = sizeof(numbers);
    // Write array to file
    writeToFile(filename, (void*)numbers, dataSize);
    // Prepare buffer to read into
    int buffer[5] = {0};
    // Read data from file into buffer
    readFromFile(filename, (void*)buffer, dataSize);
    // Print contents of buffer
    for (int i = 0; i < 5; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");
    return 0;
}
