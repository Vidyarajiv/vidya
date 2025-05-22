#include <stdio.h>               
typedef union {
    int i;                       // Rule 9.2
    float f;
} Data;  // Rule 8.4
int main(void)                   
{                                
    Data data;                 
    data.i = 42;
    printf("Integer: %d\n", data.i);     
    data.f = 3.14f;
    printf("Float: %.2f\n", data.f);
    return 0;                    // Rule 15.5: Return at end of function
}
