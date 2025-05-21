#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
};
// Function to print a person's info
void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
}
//function to update age
void birthday(struct Person *p) {
    p->age += 1;
}
int main() {
    struct Person n;
    strcpy(n.name, "kala");
    n.age = 30;
    printPerson(n);
    birthday(&n);
    printf("After birthday:\n");
    printPerson(n);
    return 0;
}/* output: name:kala
            age:30
            After birthday:
            name :kala
            age:31*/
