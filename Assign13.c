// WAP check whether number is positive, negative or zero
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is a positive number.\n", num);
    }
    else
    {
        if (num < 0)
        {
            printf("%d is a negative number.\n", num);
        }
        else
        {
            printf("%d is zero.\n", num);
        }
    }
    return 0;
}

/*
Output :

Enter any number : -5
-5 is a negative number.

*/
