#include <stdio.h>
// Define a union
typedef union {
    int i;
    float f;
} Data;
void printunion(void)
{
    // Static union retains its value between function calls
    static Data data;
    // Increment integer member
    data.i += 10;
    // Print current value of integer member
    printf("data = %d\n",data.i);
}
int main(void)
{
    printunion();  // Output: 10
    printunion();  // Output: 20
    printunion();  // Output: 30
    return 0;
}
