#include<stdio.h>
void main(){
    int a[3]={1,2,2};
    int n=sizeof(a)/sizeof(a[0]);
    int (*p)[3];
    p=&a;
    for(int i=0;i<n;i++)
    {
        printf("%d ",(*p)[i]);
    }
}