//WAP to calculate sum and average of n numbers using for loop
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int sum = 0;
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    float average = sum / n;
    printf("Sum: %d\nAverage: %.2f", sum, average);
    return 0;
}
/*
Output :

Enter the number of elements: 5
Enter 5 numbers: 10 20 30 40 50
Sum: 150
Average: 30.00

*/