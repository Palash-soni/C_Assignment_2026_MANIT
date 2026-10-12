// WAP to implement linear search

#include<stdio.h>
int main(){
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter element to search : ");
    scanf("%d",&key);
    int idx=-1;
    
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            idx=i;
            break;
        }
    }

    if(idx!=-1){
        printf("Element found at : %d",idx);
    }else{
        printf("Element not found");
        
    }

    return 0;



}