//WAP to input and display the elements of 1D array

#include <stdio.h>
int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// Output : 

// Enter the number of elements in the array: 5
// Enter 5 elements:
// 1 3 2 4 5
// The elements of the array are:
// 1 3 2 4 5 
