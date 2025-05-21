#include <stdio.h>
#include <string.h>
enum gender{male,female,other};
struct person{
    char name[20];
    int age;
    enum gender gen;
};
 char* genderdisplay(enum gender gen) //function to print gender
{
    switch(gen)
    {
        case male: return "male";
        case female: return "female";
        case other: return "other";
        default: return "unknown";
    }
}
void personinfo(struct person p) //function to print person information
{
    printf("name:%s\n",p.name);
    printf("age:%d\n",p.age);
    printf("gender:%s",genderdisplay(p.gen));
}
int main(){
    struct person p1;
    strcpy(p1.name,"rishi");
    p1.age=10;
    p1.gen=male;
    personinfo(p1);
}
/*output: name:Rishi
           age:10
           gender:male*/
