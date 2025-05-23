#include <stdio.h>
enum Flag { LOW, HIGH };            
volatile enum Flag signal = LOW; // value of a variable can chane at any time
void main()                     
{
    printf("Signal is %d\n", signal); // printing the signal status
}