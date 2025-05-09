#include<stdio.h>
int sumnum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
    sum+=a[i];
    }
    return sum;
}
    int main()
    {
        int a[]={1,2,3};
        int n=(sizeof(a)/sizeof(a[0]));
        int total=sumnum(a,n);
        printf("%d",total);
        return 0;
    }