//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>
int main(){
    int n,num;
    printf("Enter the size:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++) {
        printf("Enter number %d:\t", n);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element that has to deleted:");
    scanf("%d",&num);

    for(int i=0;i<n;i++) {
        if (arr[i]==num) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
        }
    }
    printf("The array after deletion:\n");
    for(int i=0;i<n-1;i++){
        printf("\t%d",arr[i]);
    }
    return 0;
}