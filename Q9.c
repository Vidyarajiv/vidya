#include <stdio.h>
#include <stdlib.h>
union u1{
    int x;
};
int main(){
    union u1 u={10};
    printf("u=%d\n",u.x);
    u.x=20.34;
    printf("u=%f",u.x);
}
