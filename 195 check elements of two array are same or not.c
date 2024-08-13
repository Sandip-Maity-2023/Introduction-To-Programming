//
// Created by 12san on 13-08-2024.
//
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n],arr2[n];
    printf("Enter the elements of 1st array:\n");
    for(int i=0;i<n;i++){
        printf("Enter %d no element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements of 2nd array:\n");
    for(int i=0;i<n;i++){
        printf("Enter %d no element:\n",i+1);
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++) {
        if (arr[i] == arr2[i]) {
            printf("Two arrays are same\n");
        }else{
            printf("It's not same.");
        }
    }
}