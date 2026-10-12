//WAP to calculate the count of string without using string functions
#include<stdio.h>

int main(){
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[count] != '\0' && str[count] != '\n'){
        count++;
    }

    printf("Length of the string is: %d\n", count);
    return 0;
}

// Output:
// Enter a string: HelloWorld
// Length of the string is: 10