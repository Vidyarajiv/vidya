#include <stdio.h>          
typedef struct {
    int id;
    int marks;
} Student_t;                    // Rule 8.4, Rule 9.2
int main(void)                  // Rule 8.1, Rule 15.5
{
    const Student_t s1 = {101, 85};  // Rule 8.13, Rule 9.1
    printf("ID: %d, Marks: %d\n", s1.id, s1.marks);  
    return 0;                  
}
