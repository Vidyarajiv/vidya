#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int *p=a;
    for(int i=0;i<n;i++)
    {
    printf("%d ",*(p+i));
    printf("%p ",p+i);
}
}