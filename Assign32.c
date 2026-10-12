//WAP to area of different shapes using switch case and function
#include<stdio.h>

void circle(float radius) {
    float area = 3.14159 * radius * radius;
    printf("Area of Circle: %.2f\n", area);
}
void rectangle(float length, float width) {
    float area = length * width;
    printf("Area of Rectangle: %.2f\n", area);
}
void triangle(float base, float height) {
    float area = 0.5 * base * height;
    printf("Area of Triangle: %.2f\n", area);
}
void square(float side) {
    float area = side * side;
    printf("Area of Square: %.2f\n", area);
}

int main() {
    int choice;

    printf("Choose a shape to calculate area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Square\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:

            printf("Enter the radius of the circle: ");
            float radius;
            scanf("%f", &radius);
            circle(radius);
            break;
        case 2:
            printf("Enter the length and width of the rectangle: ");
            float length, width;
            scanf("%f %f", &length, &width);
            rectangle(length, width);
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            float base, height;
            scanf("%f %f", &base, &height);
            triangle(base, height);
            break;
        case 4:
            printf("Enter the side of the square: ");
            float side;
            scanf("%f", &side);
            square(side);
            break;
        default:
            printf("Invalid choice! Please select a valid option.\n");
            break;
    }

    return 0;
}

// Output: 

// Choose a shape to calculate area:
// 1. Circle
// 2. Rectangle
// 3. Triangle
// 4. Square
// Enter your choice (1-4): 1
// Enter the radius of the circle: 7
// Area of Circle: 153.94