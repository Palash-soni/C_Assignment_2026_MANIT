// WAP to print the following pattern:
// A
// A B
// A B C
// A B C D
#include<stdio.h>
int main(){
    
    for(int i=1;i<=5;i++){
        int chara = 65;
        for(int j=1;j<=i;j++){
            printf("%c ",chara);
            chara++;
        }
        printf("\n");
    }
}

/*
Output :

A
A B
A B C
A B C D

*/
