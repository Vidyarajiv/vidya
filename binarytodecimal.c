#include <stdio.h>
 void main()
{
    int rem,num,dv=0,base =1;
    printf("Enter the binary number ");//1011
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        dv=dv+rem*base;
        base=base*2;
    }
    printf("Converted binary to decimal value=%d",dv);//11
}
    