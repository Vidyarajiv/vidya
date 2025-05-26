#include <stdio.h>
#include <string.h>
// Copies bytes from const source to destination
void copyData(void* dest, const void* src, size_t size) {
    // Cast const void* to const char* for byte-wise copying
    const char* source = (const char*)src;
    char* destination = (char*)dest;

    for (size_t i = 0; i < size; ++i) {
        destination[i] = source[i];
    }
}
int main() {
    int src[] = {10, 20, 30};
    int dest[3];
    copyData(dest, src, sizeof(src));
    for (int i = 0; i < 3; i++) {
        printf("%d ", dest[i]);
    }
    return 0;
}
