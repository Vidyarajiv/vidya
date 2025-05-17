#include <stdio.h>
int main(){
    const int a[]={10,20,30,40};
    int n=sizeof(a)/sizeof(a[0]);
   // a[3]=33; print error
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
   