#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p;
    int n;
    printf("enter no. of the elements");
    scanf("%d",&n);
    p=(int*)malloc(n* sizeof(int));
    if(p==NULL)
    {
        printf("memory is not allocated");
    }
    for(int i=0;i<n;i++)
    {
        p[i]=i*2;
    }
    printf("the elements are:");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",p[i]);
    }
   free(p);
   return 0;
    }