#include <stdio.h>
#include <stdlib.h>
int sumfun(int a[],int n)
{
    int *p=a,sum;
    for(int i=0;i<n;i++)
    {
         sum=sum+(p[i]);
    }
    return sum;
}
int main(){
    int a[5]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
   int sum= sumfun(a,n);
    printf("%d",sum);
}
