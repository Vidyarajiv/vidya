#include <stdio.h>
#include <stdlib.h>
int bit(int n,int i)
{
    int mask=1<<(i-1);
     n=n|mask;
     printf("%d",n);
}
int main(){
   int n=8,i=1;
    bit(n,i);
}
