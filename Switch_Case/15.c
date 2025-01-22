#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose a shape to calculate area:\n");
    printf("1. Circle\n2. Rectangle\n3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float radius, area;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = M_PI * radius * radius;
            printf("Area of the circle: %.2f\n", area);
            break;
        }
        case 2: {
            float length, breadth, area;
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of the rectangle: %.2f\n", area);
            break;
        }
        case 3: {
            float base, height, area;
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
