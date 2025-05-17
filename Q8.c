#include <stdio.h>
#include <stdlib.h>
struct person{
    char name[10];
    int age;
};
int main(){
    struct person pt[3]={
        { "mala",20},
        {"sheela",30},
        {"kala",25}
    };
    for(int i=0;i<3;i++)
    {
    printf("name=%s\nage=%d\n",pt[i].name,pt[i].age);
}
}
