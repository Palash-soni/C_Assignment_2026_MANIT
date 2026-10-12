// WAP to calculate student grade based system on marks
#include <stdio.h>


int main()
{
    int marks;
    printf("Enter the marks obtained: ");
    scanf("%d", &marks);
    if(marks >= 90 ) {
        printf("The grade for %d marks is: A+\n", marks);
    } else if(marks >= 80 ) {
        printf("The grade for %d marks is: A\n", marks);
    } else if(marks >= 70 ) {
        printf("The grade for %d marks is: B\n", marks);
    } else if(marks >= 50 ) {
        printf("The grade for %d marks is: C\n", marks);
    }else if(marks >= 35 ) {
        printf("The grade for %d marks is: D\n", marks);
    } else{
        printf("The grade for %d marks is: F\n", marks);
    }
    return 0;
}



// Output : 

// Enter the marks obtained: 85
// The grade for 85 marks is: A