//WAP to sum and average of elements in array

#include <stdio.h>
int main() {
    int n,sum=0,avg;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Sum : %d\nAverage : %d", sum,avg);

    return 0;
}


// Output : 

// Enter the number of elements in the array: 5
// Enter 5 elements:
// 1 2 3 4 5
// Sum : 15
// Average : 3
