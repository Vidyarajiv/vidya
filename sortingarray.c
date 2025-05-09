#include<stdio.h>
int main()
{
    int a[]={1,2,3};
    int b[]={3,2,1};
    int c[20];
    int i,j,k;
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    for(i=0;i<n;i++)
    {
        c[k]=a[i];
        k++;
    }
    for(j=0;j<m;j++)
    {
        c[k]=b[j];
        k++;
    }
   int o=n+m;
    for(i=0;i<o;i++)
    {
       for(k=0;k<o;k++)
       {
        if(c[k]<c[k+1])
        {
            int temp=c[k+1];
            c[k+1]=c[k];
            c[k]=temp;
        }
    }
    }
    for(k=0;k<o;k++)
    {
        printf("%d ",c[k]);
    }
}