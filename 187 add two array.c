//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);

    int arr1[n],arr2[n];
    int arr[n];

    printf("Enter the elements of array 1:\n");
    for(int i=0;i<n;i++){
        printf("Enter number %d:\t",n);
        scanf("%d",&arr1[i]);
    }

    printf("Enter the elements of array 2:\n");
    for(int i=0;i<n;i++){
        printf("Enter number %d:\t",n);
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++) {
        arr[i] = arr1[i] + arr2[i];
    }
    printf("Sum of the two array are:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}