#include<stdio.h>
#include<string.h>
struct car{
    int speed;
    char mode;
}c;
void find(struct car c)//function to print speed and mode
{
    printf("Speed=%d\n",c.speed);
        printf("%c",(c.mode));
    switch(c.mode)
{
    case 'a': printf("accelerate mode"); break;
    case 'b': printf("break1 mode");break;
    case 'c': printf("clutch mode");break;// switch statement must have break;
    default :printf("unkown mode\n");// switch statement must have default
}
}
int main(void)// int main must contain void
{
    struct car c;
    printf("Enter the speed of car:");
    scanf("%d",&c.speed);
    printf("Enter the mode:");
    scanf(" %c",&c.mode);
    find(c);
    return 0;
}