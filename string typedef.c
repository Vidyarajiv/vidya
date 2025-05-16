#include <stdio.h>
typedef char* String;
int main() {
    String name = "Alice";  // same as: char *name
    printf("Name: %s\n", name);
    return 0;
}
