// WAP to print the following pattern:
// 1 2 3 4 
// 2 4 6 8
// 3 6 9 12
// 4 8 12 16

#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
}

/*
Output :

1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16

*/


