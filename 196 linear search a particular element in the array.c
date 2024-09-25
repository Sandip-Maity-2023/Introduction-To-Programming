//
// Created by 12san on 13-08-2024.
//
#include<stdio.h>
int main(){
    int n,arr[10],num,found=0;
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        printf("Enter %d no element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element:\n");
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            printf("The element %d is found at location %d",num,i+1);
            found=1;
            break;
        }
    }if(!found) {
        printf("the element does not exist in the array\n");
    }
    return 0;
}
