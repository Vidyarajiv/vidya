#include<stdio.h>
int main()
{
   char a[20];
   int vc,cc;
   char *p=a;
   printf("enter a string ");
   scanf("%s",&(*p));
    while(*p!='\0')
   {
       if(*p=='A'|| *p=='a'|| *p=='E'|| *p=='e'|| *p=='I'|| *p=='i'||
       *p=='O'||*p=='o'|| *p=='U'|| *p=='u')
       vc++;
       else{
       cc++;
   }
   *p++;
   }
   printf("number of vowel count=%d\n number of consonant count=%d",vc,cc);
}