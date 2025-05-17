#include <stdio.h>
#include <stdlib.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main(){
    int x=20,y=30;
    int (*fptr)(int,int)=add;
    printf("Addition= %d",fptr(x,y));
}
