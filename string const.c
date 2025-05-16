#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char display(const char* p)
{
    printf("%s \n",p);
}
char compare(const char* a,const char* b)
{
    return strcmp(a,b);
}
int main(){
    char *a="vidya";
    char *b="vidya";
    display(a);
    display(b);
    if((compare)(a,b)==0)
    {
        printf("strings are equal");
    }
    else
    printf("strings are not equal");
}