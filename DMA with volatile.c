#include <stdio.h>
#include <stdlib.h>
int main() {
    // Allocate memory dynamically
    volatile int* data = (int*)malloc(5 * sizeof(int));  // volatile pointer to DMA
    if (data == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    // Write to memory
    for (int i = 0; i < 5; i++) {
        data[i] = i * 10;  // No optimization: each write is real
    }
    // Read from memory
    for (int i = 0; i < 5; i++) {
        printf("%d ", data[i]);  // Each read happens as-is
    }
    free((void*)data);  // Cast back to void* for free
    return 0;
}
