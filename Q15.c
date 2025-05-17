#include <stdio.h>
volatile int a=10;
int main(){
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a);
    }
}// here we can modify 'a' value using external interrupt
   