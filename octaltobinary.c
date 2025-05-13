#include <stdio.h>
#define max 1000
int main()
 {
    char octal[max];
    int i=0;
    printf("enter octal number");
    scanf("%s",octal);
    printf("equivalent binary value:");
    while(octal[i])
    {
    switch(octal[i])
    {
        case '0':
        printf("000");
        break;
        case '1':
        printf("001");
        break;
        case'2':
        printf("010");break;
        case'3':
        printf("011"); break;
        case '4':
        printf("100"); break;
        case'5':
        printf("101"); break;
        case '6':
        printf("110"); break;
        case '7':
        printf("111"); break;
        default:
        printf("invalid input");
    }
    i++;
    }
    return 0;
}