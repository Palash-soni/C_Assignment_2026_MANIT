//WAP to find smallest element in the array
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

    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest element in the array is: %d\n", min);

    return 0;
}

// Output :

// Enter the number of elements in the array: 5
// Enter 5 elements: 9 6 2 4 9
// The smallest element in the array is: 2
