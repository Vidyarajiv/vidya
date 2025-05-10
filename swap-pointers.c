#include<stdio.h>
int swapnum(int *x,int *y,int *z)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
}
int main()
{
    int a=1,b=2,c=3;
    int swap=swapnum(&a,&b,&c);
    printf("%d %d %d",a,b,c);
}
    