#include <stdio.h>
#define PI 3.14 // PI is const
void printArea(float r) //function to print area of circle
{
    float area = PI * r * r;
    printf("Area: %f\n", area);
}
void main() 
{
    // PI=1.23; error
    printArea(2.0); 
}