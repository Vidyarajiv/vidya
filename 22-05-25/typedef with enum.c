#include<stdio.h>
typedef enum {
LOW,
MEDIUM,
HIGH
} Priority;
int main() {
Priority taskPriority = LOW;
if (taskPriority == HIGH) {
    printf("This task has high priority!\n");
}
else if (taskPriority == LOW) {
    printf("This task has low priority!\n");
}
  else  if (taskPriority == MEDIUM) {
    printf("This task has medium priority!\n");
    }
return 0;
}