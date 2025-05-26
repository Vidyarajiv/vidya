#include <stdio.h>
#include <string.h>
// Typedef for pointer to const int
typedef const int* ConstIntPtr;
// Typedef struct
typedef struct {
    int id;
    char name[50];
} Student;
// Function that accepts a const struct pointer
void printStudent(const Student* s) {
    printf("Student ID: %d\n", s->id);
    printf("Student Name: %s\n", s->name);
    // s->id = 10; not allowed - s is const
}
int main() {
    // Using typedef for const int pointer
    int value = 100;
    ConstIntPtr ptr = &value;
    // *ptr = 200; error: can't modify through pointer to const
    printf("Value through ConstIntPtr: %d\n", *ptr);
    // Using typedef struct with const
    Student s1 = {101, "mala"};
    printStudent(&s1);  // Safe read-only access
    // const pointer to int (Int* const)
    typedef int* IntPtr;
    IntPtr const fixedPtr = &value;
    // fixedPtr = &otherVar; not allowed - fixedPtr is const
    // But value it points to can be changed
    *fixedPtr = 300;
    printf("Updated value: %d\n", value);
    return 0;
}
