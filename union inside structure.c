#include <stdio.h>
#include<string.h>
union Data {
    int i;
    float f;
    char str[20];
};
struct Container {
    int type;         
    union Data data;  
};
int main() {
    struct Container c;
    c.type = 0;
    c.data.i = 10;
    printf("Type: %d, Integer: %d\n", c.type, c.data.i);
    c.type = 1;
    c.data.f = 3.14;
    printf("Type: %d, Float: %.2f\n", c.type, c.data.f);
    c.type = 2;
    strcpy(c.data.str, "Hello");
    printf("Type: %d, String: %s\n", c.type, c.data.str);
    return 0;
}
