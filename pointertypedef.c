#include<stdio.h>
struct student{
    int id;
    float marks;
};
typedef struct student* p;
int main(){
struct student s={20,90.25};
 p ptr=&s;
printf("id=%d\n marks=%f",ptr->id,ptr->marks);
}


