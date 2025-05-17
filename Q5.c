#include <stdio.h>
void sum()
{
    int a=10,b=20;
    int c=a+b;
    printf("Sum=%d",c);
}
void *fun(void (*callback)())
{
    callback();
}
int main()
{
    fun(sum);
}
