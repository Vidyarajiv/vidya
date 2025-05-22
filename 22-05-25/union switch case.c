#include <stdio.h>
union Data {
    int i;
    float f;
    char str[20];
};
int main() {
    union Data data;
    char type;
    printf("Enter data type (i for int, f for float, s for string): ");
    scanf(" %c", &type);
    switch (type) {
        case 'i':
            printf("Enter integer value: ");
            scanf("%d", &data.i);
            printf("Integer value: %d\n", data.i);
            break;
        case 'f':
            printf("Enter float value: ");
            scanf("%f", &data.f);
            printf("Float value: %f\n", data.f);
            break;
        case 's':
            printf("Enter string value: ");
            scanf("%s", data.str);
            printf("String value: %s\n", data.str);
            break;
        default:
            printf("Invalid data type\n");
    }
    return 0;
}