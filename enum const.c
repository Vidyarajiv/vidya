#include <stdio.h>
enum Status { OFF, ON };          
void main()                   
{
    const enum Status s = ON;    // Rule 8.7 , declaring the variable as constant
    // s = OFF;  //Error: cannot modify a const variable
    printf("Status is: %d\n", s);
}