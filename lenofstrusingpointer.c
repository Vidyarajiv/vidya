#include<stdio.h>
void main(){
    char *a={"vidya"};
    char *p=a;
    int i=0;
    while(*p!='\0')
    {
        i++;
        p++;
    }
    printf("length of the string is %d",i);
}