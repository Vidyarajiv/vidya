#include <stdio.h>
enum names{vidya,priya,bindu};
int main(){
    enum names nm=vidya;
    enum names *p=&nm;
    printf("%d\n",nm);
    printf("%d\n",*p);
    *p=bindu;
    printf("%d",*p);
}

