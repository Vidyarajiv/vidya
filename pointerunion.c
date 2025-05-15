#include<stdio.h>
#include<string.h>
union stud{
     int id;
    char name[10];
   float marks;
};
int main(){
  union stud sd;
  union stud *p=&sd;
  p->id=20;
  printf("id=%d\n",p->id);
  strcpy(p->name,"vidya");
  printf("name=%s\n",p->name);
  p->marks=90.2;
  printf("marks=%f",p->marks);
}