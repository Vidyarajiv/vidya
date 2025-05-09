#include<stdio.h>
int main()
{
    int a[]={1,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=n-1;i>=0;i--)
    printf("%d ",a[i]);
return 0;       
}   

