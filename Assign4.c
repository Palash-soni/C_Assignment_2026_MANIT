//WAP to calculate factorial of a given number
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int fact = 1;
    for(int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %d", a, fact);
    return 0;
}
/*
Output :

Enter a number: 5
Factorial of 5 is 120

*/