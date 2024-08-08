//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        printf("Enter number %d:\t",n);
        scanf("%d",&arr[i]);
    }
    printf("Factorial of the elements are:\n");
    for(int i=0;i<n;i++){
        int factorial=1;

        for(int j=1;j<=arr[i];j++){
        factorial=factorial*j;
        }
        printf("%d\t",factorial);
    }
    return 0;
}