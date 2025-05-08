#include<stdio.h>
void main(){
    int m=10;
    float n=20;
    char v='a';
    int *x=&m;
    float *y=&n;
    char *z=&v;
    printf("%p %p %p %d %f %c",&m,&n,&v,*x,*y,*z);
}