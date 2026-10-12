//WAP to check whether the given character is an alphabet or special character or digit
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        printf("%c is an alphabet.",ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("%c is a digit.",ch);
    }
    else{
        printf("%c is a special character.",ch);
    }
    return 0;
}

/*
Output :
Enter a character: A
A is an alphabet.
*/