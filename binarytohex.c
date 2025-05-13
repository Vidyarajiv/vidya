#include <stdio.h>
 void main()
{
    int num,hexdec=0,i=1,rem;
    printf("enter the binary value");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        hexdec=hexdec+rem*i;
        i=i*2;
        num=num/10;
    }
    printf("converted binary to hexadecimal value = %X",hexdec);
}