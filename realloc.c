reallocating size using realloc
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int size;
    printf("enter the size ");
    scanf("%d",&size);
    p=(int*)malloc(size *sizeof(int));
    if(p==NULL)
    printf("memory not allocated");
    else
        printf("memory successfully allocated\n");
        for(int i=0;i<size;i++)
        {
        p[i]=i*size;
}
printf("entered elements are ");
for(int j=0;j<size;j++)
{
    printf("%d  ",p[j]);
}
size=10;
int *temp=p;
p=realloc(p,size* sizeof(int));
printf("\nmemory successfully reallocated\n");
for(int j=5;j<size;j++)
{
    p[j]=j+1;
}
printf("newly allocated elements are ");
for(int j=0;j<size;j++)
{
    printf("%d ",p[j]);
}
}
