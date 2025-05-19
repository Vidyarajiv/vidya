#include <stdio.h>
struct Rectangle {
    int length;
    int width;
};
struct Circle {
    float radius;
};
union ShapeData {
    struct Rectangle rect;
    struct Circle circ;
};
enum ShapeType {
    SHAPE_RECTANGLE,
    SHAPE_CIRCLE
};
struct Shape {
    enum ShapeType type;
    union ShapeData data;
};
void printShape(struct Shape s) {
    switch (s.type) {
        case SHAPE_RECTANGLE:
            printf("Rectangle: length=%d, width=%d\n",
                   s.data.rect.length, s.data.rect.width);
            break;
        case SHAPE_CIRCLE:
            printf("Circle: radius=%.2f\n", s.data.circ.radius);
            break;
        default:
            printf("Unknown shape\n");
    }
}
int main() {
    struct Shape s1, s2;
    s1.type = SHAPE_RECTANGLE;
    s1.data.rect.length = 10;
    s1.data.rect.width = 5;
    s2.type = SHAPE_CIRCLE;
    s2.data.circ.radius = 3.5f;
    printShape(s1);
    printShape(s2);
    return 0;
}
//output: Rectangle: length=10, width=5
//circle: radius=3.50