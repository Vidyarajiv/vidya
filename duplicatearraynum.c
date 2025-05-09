#include<stdio.h>
int main()
{
    int a[]={1,2,3,1,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            printf("%d ",a[i]);
        }
    }
return 0;       
}