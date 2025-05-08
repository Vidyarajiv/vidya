#include<stdio.h>
void main(){
  char *p={"hello"};
  while(*p!='\0')
  {
      printf("%c ",*p);
      *p++;
  }
  
}