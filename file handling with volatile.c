#include <stdio.h>
// Declare volatile file pointer to simulate unexpected changes (e.g. multi-threaded)
volatile FILE* volatileFile = NULL;
void openFile() {
    volatileFile = fopen("example.txt", "r");
    if (volatileFile == NULL) {
        printf("Error opening file\n");
    }
}
void closeFile() {
    if (volatileFile) {
        fclose((FILE*)volatileFile);  // cast away volatile for fclose
        volatileFile = NULL;
    }
}
int main() {
    openFile();
    if (volatileFile) {
        int ch = fgetc((FILE*)volatileFile);  // cast volatile away to use in fgetc
        printf("First character: %c\n", ch);
    }
    closeFile();
    return 0;
}
