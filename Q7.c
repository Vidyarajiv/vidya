#include <stdio.h>
#include <stdlib.h>
struct point{
    int x;
    int y;
};
int main(){
    struct point pt={ 10,20};
    printf("x=%d\ny=%d",pt.x,pt.y);
}
