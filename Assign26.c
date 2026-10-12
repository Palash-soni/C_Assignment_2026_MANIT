//WAP to calculate sum of even no. and odd no. from 1 to n, using a separate function  

#include <stdio.h>
int sum_even(int n);
int sum_odd(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int even_sum = sum_even(n);
    int odd_sum = sum_odd(n);
    
    printf("Sum of even numbers from 1 to %d is: %d\n", n, even_sum);
    printf("Sum of odd numbers from 1 to %d is: %d\n", n, odd_sum);
    
    return 0;
}



int sum_even(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}
int sum_odd(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

// Output : 

// Enter a number: 10
// Sum of even numbers from 1 to 10 is: 30
// Sum of odd numbers from 1 to 10 is: 25

