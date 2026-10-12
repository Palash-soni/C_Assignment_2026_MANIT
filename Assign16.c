// WAP to print the following pattern:
// F 
// F R
// F R I
// F R I E
// F R I E N
// F R I E N D

#include<stdio.h>
int main()
{
    for(int i=0;i<6;i++){
        for(int j=0;j<i+1;j++){
            if(j==0){
                printf("F ");
            }
            else if (j==1){
                printf("R ");
            }
              else if (j==2){
                printf("I ");
            }
              else if (j==3){
                printf("E ");
            }
              else if (j==4){
                printf("N ");
            }
            else{
                printf("D ");
            }
        }
        printf("\n");
    }
    return 0;
}