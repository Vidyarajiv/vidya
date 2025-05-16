#include <stdio.h>
void printMessage() {
   static char msg[] = "Hello, static world!";//stores in static memory
    printf("%s\n", msg);
}
void printmessage1(){
    char msg1[] = "Hello world!";//stores in stack memory
    printf("%s\n", msg1);
}
int main() {
    printMessage();
    printmessage1();
    printMessage();
    printmessage1();
    return 0;
}
