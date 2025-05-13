#include<stdio.h>
int main(){
    int octal,decimal=0,rem,i=1;
    printf("enter the octal number");
    scanf("%d",&octal);
    while(octal>0)
    {
        rem=octal%10;
        decimal=decimal+rem*i;
        i=8*i;
        octal=octal/10;
    }
    printf("converted octal to decimal value=%d",decimal);
}