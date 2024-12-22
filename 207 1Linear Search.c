//
// Created by 12san on 20-12-2024.
//
#include<stdio.h>
#include<stdbool.h>
int linear(int arr[],int n,int k){
    bool found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("Element %d is found at location %d\n",k,i+1);
            found=1;
        }
    }
    if(!found){
        printf("Element does not exit.\n");
    }
}
int main(){
    int n,k;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        printf("%d no element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("\nYour elements are:%d\t",arr[i]);
    }
    printf("\nEnter target:\n");
    scanf("%d",&k);
    linear(arr,n,k);

    return 0;
}