#include<stdio.h>
int add(int *x,int *y)
{
    while(*y!=0)
    {
        int carry=*x&*y;
        *x=*x^*y;
        *y=carry<<1;
    }
    return *x;
}
int main(){
    int a=5,b=3;
    printf("addition= %d",add(&a,&b));
}
    