//WAP a program using switch case to implement basic calculator

#include <stdio.h>
int main() {
    char operator;
    float num1, num2, result;

    printf("Enter your expression : ");
     scanf("%f %c %f", &num1, &operator ,&num2);   

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Addition = %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Subtraction = %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Multiplication = %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Division = %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

// Output :

// Enter your expression : 10*3
// Multiplication = 30.00