#include <stdio.h>
#define PI 3.14159

void diameter(float radius) {
    printf("Diameter of the circle: %f\n", 2 * radius);
}

void circumference(float radius) {
    printf("Circumference of the circle: %f\n", 2 * PI * radius);
}

void area(float radius) {
    printf("Area of the circle: %f\n", PI * radius * radius);
}

int main() {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter(radius);
    circumference(radius);
    area(radius);

    return 0;
}