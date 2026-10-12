//WAP to find largest of two numbers without array
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of A: ");
    scanf("%d",&a);
    printf("Enter value of B: ");
    scanf("%d",&b);
    if(a>b){
        printf("A is largest");
    }
    else if(b>a){
        printf("B is largest");
    }
    else{
        printf("Both are equal");
    }
    return 0;
}

/*
Output :

Enter value of A: 13
Enter value of B: 10
A is largest

*/