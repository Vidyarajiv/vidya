#include <stdio.h>                 
// Define a structure to store dimensions
struct area {   // Rule 8.4, Rule 9.2
    int length;
    int breadth;
};
// Function to find area of a rectangle
int findarea(int l, int b)  // Rule 8.1, Rule 17.1, Rule 17.7
{
    int a;         
    a = l * b;
    return a;                     
}
int main()                     
{
    const struct area aa = {10, 20};  // Rule 8.13, Rule 9.1
    // aa.breadth = 30;            // Rule 1.3, Rule 8.13
    printf("Area=%d", findarea(10, 20));  
    return 0;                      
}
