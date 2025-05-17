#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int result(int a,int b,int (*fptr)(int,int))
{
    return fptr(a,b);
}
int main()
{
    int a=10,b=30;
    printf("Addition=%d\n",result(a,b,add));
    printf("Substraction=%d\n",result(a,b,sub));
    printf("Multiplication=%d",result(a,b,mul));
}
