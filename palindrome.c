#include<stdio.h>
void main()
{
   char a[]="malayala";
   int i=0,j=0;
   while(a[j]|='\0')
   {
       j++;
   }
   j=j-1;
   while(a[i]!='\0')
   {
     if(a[i]!=a[j])
     break;
     i++;
     j--;
   }
   if(i>j)
   printf("the string is palindrome");
   else
   printf("the string is not palindrome");
}