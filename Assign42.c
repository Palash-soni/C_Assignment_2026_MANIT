//WAP to print the following pattern :
// 1
// 2 3 
// 4 5 6
// 7 8 9 10

#include<stdio.h>
int main(){
    int t=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",t);
            t++;
        }
        printf("\n");
    }
    return 0;
}

// Output:
// 1
// 2 3 
// 4 5 6
// 7 8 9 10
