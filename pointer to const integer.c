#include<stdio.h>
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    const int *p=a;
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    p=&a[2];
    printf("\n%d",*p);
}