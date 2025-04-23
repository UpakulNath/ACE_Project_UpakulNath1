#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function declarations
float area_circle(float radius);
float circumference_circle(float radius);
float area_rectangle(float length, float width);
float perimeter_rectangle(float length, float width);
float area_triangle(float a, float b, float c);
float perimeter_triangle(float a, float b, float c);
int is_valid_triangle(float a, float b, float c);

int main() {
    int choice;
    float r, l, w, a, b, c;

    printf("=== Shape Calculator ===\n");
    printf("Choose a shape:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (choice) {
            if (scanf("%f", &r) != 1) {
                printf("Invalid input. Please enter a valid number.\n");
                return 1;
            }
            // Circle
            printf("Enter the radius of the circle: ");
            scanf("%f", &r);
            if (r <= 0) {
                printf("Invalid radius. Must be positive.\n");
                return 1;
            }
            printf("Area of Circle = %.2f\n", area_circle(r));
            if (scanf("%f %f", &l, &w) != 2) {
                printf("Invalid input. Please enter two valid numbers.\n");
                return 1;
            }
            break;

        case 2:
            // Rectangle
            printf("Enter length and width of the rectangle: ");
            scanf("%f %f", &l, &w);
            if (l <= 0 || w <= 0) {
                printf("Invalid dimensions. Must be positive.\n");
            if (scanf("%f %f %f", &a, &b, &c) != 3) {
                printf("Invalid input. Please enter three valid numbers.\n");
                return 1;
            }
            }
            printf("Area of Rectangle = %.2f\n", area_rectangle(l, w));
            printf("Perimeter of Rectangle = %.2f\n", perimeter_rectangle(l, w));
            break;

        case 3:
            // Triangle
            printf("Enter the three sides of the triangle: ");
            scanf("%f %f %f", &a, &b, &c);
            if (!is_valid_triangle(a, b, c)) {
                printf("Invalid triangle sides.\n");
                return 1;
            }
            printf("Area of Triangle = %.2f\n", area_triangle(a, b, c));
            printf("Perimeter of Triangle = %.2f\n", perimeter_triangle(a, b, c));
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}


float area_circle(float radius) {
    return M_PI * radius * radius;
}

float circumference_circle(float radius) {
    return 2 * M_PI * radius;
}

float area_rectangle(float length, float width) {
    return length * width;
}

float perimeter_rectangle(float length, float width) {
    return 2 * (length + width);
}

float area_triangle(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

float perimeter_triangle(float a, float b, float c) {
    return a + b + c;
}

int is_valid_triangle(float a, float b, float c) {
    return (a + b > c && a + c > b && b + c > a);
}
