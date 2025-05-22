#include <stdio.h>               
#include <stdlib.h>              
union Data {                     // Rule 8.4
    int *ptr;                    // Rule 9.2 
};
int main(void)                  
{                               
    union Data d;                // Rule 9.1
    //malloc for allocating required memory
    d.ptr = (int *) malloc(sizeof(int));  //Rule 21.3 
    if (d.ptr != NULL)          
    {
        *(d.ptr) = 50;
        printf("Integer: %d\n", *(d.ptr)); 
        free(d.ptr);        
        d.ptr = NULL; // Rule 17.6, set pointer to null after freeing
    }
    return 0;       
}
