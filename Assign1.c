//WAP to swap two numbers without using third variable
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping \nA : %d   B : %d", a, b);
    return 0;
}
/*
Output :

Enter value of A: 5
Enter value of B: 7
After swapping 
A : 7   B : 5

*/