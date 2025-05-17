#include <stdio.h>
#include <stdlib.h>
int bit(int n,int i)
{
    int mask=1<<(i-1);
    if(n&mask)
    printf("set bit");
    else
    printf("clear bit");
}
int main(){
   int n=8,i=4;
    bit(n,i);
}
