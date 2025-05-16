#include <stdio.h>
int main(){
    void *ptr;
    int a=10;
    float b=20;
    ptr=&a;
    printf("%d\n",*(int*)ptr);
    ptr=&b;
    printf("%f",*(float*)ptr);
    return 0;
}