#include<stdio.h>
void main(){
 struct A{
     int num;
 };
 struct A aa={2};
 struct A *p;
 p=&aa;
 printf("%d",p->num);
}