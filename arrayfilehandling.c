#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    FILE *fp=fopen("data.txt","w");
    if(fp==NULL)
    {
        perror("invalid file");
    }
    for(int i=0;i<n;i++)
    {
      fprintf(fp,"%d  ",a[i]);
    }
    fclose(fp);
}