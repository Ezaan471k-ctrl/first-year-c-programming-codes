#include <stdio.h>

int main() {
    float r, b, h, l, w;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Area of circle = %.2f\n", 3.14159f * r * r);

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &b, &h);
    printf("Area of triangle = %.2f\n", 0.5f * b * h);

    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &l, &w);
    printf("Area of rectangle = %.2f\n", l * w);

    return 0;
}
