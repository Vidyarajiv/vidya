#include<stdio.h>
int findsl(int a[],int n)
{
    if(n<2)
    return -1;
    int l,sl;
    for(int i=1;i<n;i++)
    {
        if(a[i]>l)
        {
        sl=l;
        l=a[i];
    }
    else if(a[i]>sl)
    sl=a[i];
}
return sl;
}
int main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int sl=findsl(a,n);
    printf("second largest num is %d",sl);
    return 0;
}