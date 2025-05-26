#include <stdio.h>
#include <stdlib.h>
void* getBuffer(int size) {
    static int* buffer = NULL;  // Static pointer to retain memory across calls
    if (buffer == NULL) {
        buffer = (int*)malloc(size * sizeof(int));  // Dynamic allocation
        if (buffer == NULL) {
            printf("Memory allocation failed.\n");
            return NULL;
        }
        printf("Memory allocated.\n");
    } else {
        printf("Reusing previously allocated memory.\n");
    }
    return buffer;
}
int main() {
    int size = 5;
    int* data = (int*)getBuffer(size);
    if (data == NULL) return 1;
    for (int i = 0; i < size; i++) {
        data[i] = i * 10;
        printf("%d ", data[i]);
    }
    // Note: we don't free here since buffer is static and reused
    // But you could free it with another function if needed
    return 0;
}
