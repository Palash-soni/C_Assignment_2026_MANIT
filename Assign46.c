//WAP to revrse a string without using string functions
#include <stdio.h>
int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    for(int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: ");
    for(int i = 0; i < length; i++) {
        printf("%c", str[i]);
    }

    return 0;
}

//Output : 
// Enter a string: HelloWorld  
// Reversed string: dlroWolleH