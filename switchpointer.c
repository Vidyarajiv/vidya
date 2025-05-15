#include<stdio.h>
int main(){
    int choice;
    int a;
    printf("enter a num ");
    scanf("%d",&a);
    int *p=&a;
    printf("1.Double the no.\n 2.Sqare the no.\n 3.reset to 0\n");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            *p=(*p)*2;
            break;
            case 2:
            *p=(*p) * (*p); break;
            case 3:
            *p=0; break;
            default:
            printf("invalid input");
        }
     printf("%d",*p);
    return 0;
}