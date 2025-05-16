#include<stdio.h>
int main(){
    char a[]="Hello file is opened";
    int i=0;
    FILE *fp=fopen("output.txt","w");
    if(fp==NULL)
    {
        perror("file is not opened");
    }
    fputs(a,fp);
    printf("File is successfully opened");
    fclose(fp);
    return 0;
}