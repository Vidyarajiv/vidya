#include <stdio.h>
#include <stdlib.h>
struct S{
    char n[10];
    int a;
    float m;
};
void main(){
struct S stud[4]={  
    {"vidya",27,99},
    {"rajiv",30,90},
    {"manju",23,94} };
for(int i=0;i<3;i++)
{
    printf("name=%s\n age=%d\n marks=%f\n",stud[i].n,stud[i].a,stud[i].m);
}
}