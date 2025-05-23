#include <stdio.h>
enum Mode { AUTO, MANUAL };// Rule 8.5, enum declaration
static enum Mode m = AUTO;  // static variable
void main()                      
{
    printf("Mode is %d\n", m); // printing the status of the mode
}