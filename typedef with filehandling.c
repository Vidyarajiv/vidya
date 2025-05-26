#include <stdio.h>
#include <stdlib.h>
typedef FILE* FileHandle;  // Typedef for cleaner code
int main() {
    FileHandle fh = fopen("example.txt", "w");  // Using alias
    if (fh == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fh, "Hello from typedef and file handling!\n");
    fclose(fh);
    return 0;
}
