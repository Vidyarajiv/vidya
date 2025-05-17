#include <stdio.h>
#include <stdlib.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=20,y=30;
    swap(&x,&y);
    printf("swapped integers are %d %d",x,y);
}
