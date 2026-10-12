// WAP for arithmetic operation using nested if
#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter your expression : ");
    scanf("%d %c %d", &a, &op, &b);
    if (op == '+')
    {
        printf("Sum = %d\n", a + b);
    }
    else
    {
        if (op == '-')
        {
            printf("Difference = %d\n", a - b);
        }
        else
        {
            if (op == '*')
            {
                printf("Product = %d\n", a * b);
            }
            else
            {
                if (op == '/')
                {
                    if (b != 0)
                    {
                        printf("Quotient = %d\n", a / b);
                    }
                    else
                    {
                        printf("Can't divide by zero\n");
                    }
                }
                else
                {
                    printf("Invalid operator\n");
                }
            }
        }
    }
    return 0;
}

/*
Output :

Enter your expression : 5+2
Sum = 7

*/
