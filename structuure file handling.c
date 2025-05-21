#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int age;
} Person;
int main() {
    FILE *fp;
    Person p1;
    printf("Enter name: ");
    scanf(" %[^\n]", p1.name);  
    printf("Enter age: ");
    scanf("%d", &p1.age);
    fp = fopen("person.dat", "wb");  
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&p1, sizeof(Person), 1, fp);
    fclose(fp);
    printf("Data written to file successfully.\n");
    fp = fopen("person.dat", "rb");  
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    Person p2;
    fread(&p2, sizeof(Person), 1, fp);
    fclose(fp);
    printf("\n Data read from file\n");
    printf("Name: %s\n", p2.name);
    printf("Age : %d\n", p2.age);
    return 0;
}
