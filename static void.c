#include <stdio.h>
#include<stdlib.h>
void setBuffer() {
    static void* buffer = NULL;

    if (buffer == NULL) {
        buffer = malloc(100);
        printf("Buffer allocated.\n");
    } else {
        printf("Buffer already exists.\n");
    }
}

int main() {
    setBuffer();
    setBuffer();  // Won't allocate again
    return 0;
}
