#include <stdio.h>
#include <stdlib.h>
// Define a struct and alias it using typedef
typedef struct {
    int id;
    char name[50];
} Student;
int main() {
    Student *s;
    // Dynamically allocate memory for one Student
    s = (Student *)malloc(sizeof(Student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
}
    // Assign values
    s->id = 101;
    snprintf(s->name, sizeof(s->name), "Vidya");
    // Display values
    printf("Student ID: %d\n", s->id);
    printf("Student Name: %s\n", s->name);
    // Free the memory
    free(s);
    return 0;
}
