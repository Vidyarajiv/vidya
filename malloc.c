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
}