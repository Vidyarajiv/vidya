#include<stdio.h>
int add(int a,int b)
{
    printf("sum=%d",a+b);
}
int sub(int a,int b)
{
     printf("substaction=%d",a-b);
}
int mul(int a,int b)
{
     printf("multiplication=%d",a*b);
}
int main(){
    int (*fp)(int,int);
    int x=10,y=20,choice;
    printf("1.Addition\n2.Substraction\n3.Multiplication\n");
    printf("enter choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        fp=add; break;
        case 2:
        fp=sub; break;
        case 3:
        fp=mul; break;
        default:
        printf("invalid input");
    }
    fp(x,y);
    return 0;
}