//WAP for arithmetic operations using functions
#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
    int a, b,res;
    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);
    res= add(a, b);
    printf("Sum = %d\n",res);
    res= sub(a, b);
    printf("Difference = %d\n",res);
    res= mul(a, b);
    printf("Product = %d\n",res);
    if (b != 0){
        res= div(a, b);
        printf("Quotient = %d\n",res);
    }
    else{
        printf("Can't divide by zero\n");
    }
    return 0;
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}
/*
Output :

Enter two numbers 10 2
Sum = 12
Difference = 8
Product = 20
Quotient = 5

*/



