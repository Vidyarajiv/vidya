#include <stdio.h>
// Define an enum for days of the week
enum Day {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
// Function that takes enum as parameter
void printDay(enum Day d) {
    switch (d) {
        case SUNDAY:
            printf("Today is Sunday\n");
            break;
        case MONDAY:
            printf("Today is Monday\n");
            break;
        case TUESDAY:
            printf("Today is Tuesday\n");
            break;
        case WEDNESDAY:
            printf("Today is Wednesday\n");
            break;
        case THURSDAY:
            printf("Today is Thursday\n");
            break;
        case FRIDAY:
            printf("Today is Friday\n");
            break;
        case SATURDAY:
            printf("Today is Saturday\n");
            break;
        default:
            printf("Invalid day\n");
    }
}
int main() {
    enum Day today = MONDAY;
    printDay(today);  // Call function with enum
    return 0;
}
