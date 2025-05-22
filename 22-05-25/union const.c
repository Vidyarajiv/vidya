#include <stdio.h>               
// Define a union using typedef
typedef union {
    int i;                       
    float f;
} Data;                        
int main(void)                   
{                                
    const Data data = { .f = 100.25 };  
    // data.i = 200; read-only objects not be modified
    printf("Value: %f\n", data.f);  
    return 0;                    
}
