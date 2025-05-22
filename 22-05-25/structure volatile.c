#include <stdio.h>              
// Define a volatile structure (e.g., simulating hardware register)
typedef struct {
    int flag;
} status;                     // Rule 8.4, Rule 9.2
static volatile status stat = {0};  // Rule 8.9, Rule 9.1
int main(void)                 // Rule 8.1, Rule 15.5
{
    //set the flag
    stat.flag = 1;          // Rule 9.1
    // Read the flag
    int temp = stat.flag;   // Rule 9.1
    // Suppress unused variable warning
    (void)temp;               // Rule 2.2
    return 0;                 // Rule 15.5
}
