    #include<stdio.h>
    #include <string.h>
    void main(){
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];
    memcpy(destination, source, sizeof(source));
    for(int i=0;i<5;i++)
    {
    printf("%d ",destination[i]);
    }
    }