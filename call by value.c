#include<stdio.h>
void fun(int x,int y)
{
    x=x+y;
    y=y+y;
    printf("%d %d\n",x,y);
}
void main(){
    int a=10,b=20;
    fun(a,b);
    printf("%d %d",a,b);
}