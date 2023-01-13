#include <stdio.h>

int main() {

    float a,b, c;

    printf("Enter the length of sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == b && b == c) {
        printf("triangle is equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("triangle is isosceles.\n");
    } else {
        printf("triangle is scalene.\n");
    }

    return 0;}