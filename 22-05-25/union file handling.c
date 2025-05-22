#include <stdio.h>  
typedef union {
    int i;                       
    float f;
} Data;     // Rule 8.4
int main(void)                   
{                                
    FILE *file_ptr = NULL;       
    Data data;
    // Write to file
    file_ptr = fopen("data.bin", "wb");     
    if (file_ptr != NULL)  
    {
        data.i = 123;
        fwrite(&data, sizeof(Data),1U, file_ptr);  
        fclose(file_ptr);
    }
    // Read from file
    file_ptr = fopen("data.bin", "rb");
    if (file_ptr != NULL)
    {
        fread(&data, sizeof(Data), 1U, file_ptr);
        printf("Read Integer: %d\n", data.i);  
        fclose(file_ptr);
    }
 return 0;                   
}
