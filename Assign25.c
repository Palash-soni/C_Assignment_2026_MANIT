//WAP to find largest of three numbers without array
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of A: ");
    scanf("%d",&a);
    printf("Enter value of B: ");
    scanf("%d",&b);
    printf("Enter value of C: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("A is largest");
    }
    else if(b>a && b>c){
        printf("B is largest");
    }
    else if(c>a && c>b){
        printf("C is largest");
    }
    else{
        printf("All are equal");
    }
    return 0;
}

/*
Output :

Enter value of A: 13
Enter value of B: 10
Enter value of C: 15
C is largest
*/