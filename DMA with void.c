#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 5;
    // Allocate memory using void pointer
    void* ptr = malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    // Cast void* to int* to use it
    int* int_ptr = (int*)ptr;
    for (int i = 0; i < n; i++) {
        int_ptr[i] = i * 10;
    }
    // Print values
    for (int i = 0; i < n; i++) {
        printf("%d ", int_ptr[i]);
    }
    // Free memory
    free(ptr);
    return 0;
}
