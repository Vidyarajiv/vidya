#include <stdio.h>               
// Define enum for selecting data type
typedef enum {
    TYPE_INT = 0,
    TYPE_CHAR
} Type_t;                        // Rule 8.4
// Define union to hold different types
typedef union {
    int i;
    char c;
} Data_t;                        // Rule 8.4, Rule 9.2
// Define structure to hold type and value
typedef struct {
    Type_t type;
    Data_t data;
} Value_t;                       // Rule 8.4, Rule 9.2
int main()                   // Rule 8.1, Rule 15.5
{
    Value_t v = {TYPE_INT, {1}}; // Rule 9.1
    v.data.i = 12;
    if (v.type == TYPE_INT)      // Rule 14.3
    {
        printf("Integer: %d\n", v.data.i);  
    }
    else if (v.type == TYPE_CHAR)
    {
        printf("Char: %c\n", v.data.c);
    }
    return 0;                    
}
