//WAP to display grade of user based on character  
#include<stdio.h>
int main(){
    char ch;
    printf("Enter your grade: ");
    scanf("%c",&ch);
    switch(ch){
    case 'O':
        printf("Outstanding\n");
        break;
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Very Good\n");
        break;
    case 'C':
        printf("Good\n");
        break;
    case 'D':
        printf("Average\n");
        break;
    case 'F':
        printf("Fail\n");
        break;
    default:
        printf("Invalid grade\n");
    }
    return 0;
}


/*
Output :

Enter your grade: A
Excellent


*/



