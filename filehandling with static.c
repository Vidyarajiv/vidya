#include <stdio.h>
void writeMessage(const char* msg) {
    // static file pointer to keep file open between calls
    static FILE* file = NULL;
    if (file == NULL) {
        file = fopen("log.txt", "a");  // open in append mode
        if (file == NULL) {
            perror("Failed to open file");
            return;
        }
    }
    fprintf(file, "%s\n", msg);
    // Note: We do NOT fclose here, so file remains open
}
int main() {
    writeMessage("First message");
    writeMessage("Second message");
    // The file remains open until program exits or you explicitly close it
    return 0;
}
