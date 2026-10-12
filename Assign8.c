// WAP to find area of different shapes (Circle, Square, Rectangle, Triangle)
#include <stdio.h>
int main()
{
    char ch;
    printf(" S : Square\n R : Rectangle\n C : Circle\n T : Triangle\n");
    printf("Type a character for any shape : ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'S':
        printf("Enter side of square : ");
        int side;
        scanf("%d", &side);
        printf("Area of square is : %d\n", side * side);
        break;
    case 'R':
        printf("Enter length and breadth of rectangle : ");
        int l, b;
        scanf("%d %d", &l, &b);
        printf("Area of rectangle is : %d\n", l * b);
        break;
    case 'C':
        printf("Enter radius of circle : ");
        int r;
        scanf("%d", &r);
        printf("Area of circle is : %.1f\n", 3.14 * r * r);
        break;
    case 'T':
        printf("Enter base and height of triangle : ");
        int base, height;
        scanf("%d %d", &base, &height);
        printf("Area of triangle is : %.1f\n", 0.5 * base * height);
        break;
    default:
        printf("Invalid input\n");
    }
    return 0;
}

/*
Output :

 S : Square
 R : Rectangle
 C : Circle
 T : Triangle
Type a character for any shape : S
Enter side of square : 5
Area of square is : 25

*/
