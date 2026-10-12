//WAP to for arithmetic operation using switch case and function
#include<stdio.h>
void add(int a, int b) {
    printf("Addition: %d\n", a + b);
}
void subtract(int a, int b) {
    printf("Subtraction: %d\n", a - b);
}
void multiply(int a, int b) {
    printf("Multiplication: %d\n", a * b);
}
void divide(int a, int b) {
    if (b != 0) {
        float result = (float)a / b;
        printf("Division: %.2f\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
int main() {
    int num1, num2;
    char op;
    printf("Enter your expression: ");
    scanf("%d %c %d", &num1, &op, &num2);
    
    
    switch (op) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice! Please select a valid operation.\n");
            break;
    }
    
    return 0;
}

/*
Output : 

Enter your expression: 5/2
Division: 2.50

*/