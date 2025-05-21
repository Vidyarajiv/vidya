#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person {
    char name[50];
    int age;
};
int main(){
    int n,i;
    printf("enter the number of persons");
    scanf("%d",&n);
    struct person* p=(struct person*)malloc(n * sizeof(struct person));
    if(p==NULL)
    {
        printf("memory is not allocated\n");
    }
    for(i=0;i<n;i++)
    {
        printf("person %d\n",i+1);
        printf("enter name:\n");
        scanf("%s",p[i].name);
        printf("enter age:\n");
        scanf("%d",&p[i].age);
    }
     printf("person's list\n");
    for(i=0;i<n;i++)
    {
       printf("name:%s\nage=%d\n",p[i].name,p[i].age);
     }
     free(p);
     return 0;
}
