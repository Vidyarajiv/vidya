#include <stdio.h>
#include <stdlib.h>
// Enum to represent a color
enum Color {RED,GREEN,BLUE};
// Struct with an enum field
struct Ball {
    enum Color color;
};
// Function to create a ball
struct Ball* createBall(enum Color c) {
    struct Ball* b = (struct Ball*)malloc(sizeof(struct Ball));
    if (b != NULL) {
        b->color = c;
    }
    return b;
}
// Function to print ball color
void printBall(struct Ball* b) {
    if (b == NULL) return;
    printf("Ball color: ");
    switch (b->color) {
        case RED:   printf("Red\n"); break;
        case GREEN: printf("Green\n"); break;
        case BLUE:  printf("Blue\n"); break;
        default:    printf("Unknown\n");
    }
}
int main() {
    struct Ball* myBall = createBall(GREEN);
    printBall(myBall);
    free(myBall);  // Always free allocated memory
    return 0;
}
