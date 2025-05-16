#include<stdio.h>
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int *const p=a;
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
  *p=7;
    printf("\n%d",*p);
}