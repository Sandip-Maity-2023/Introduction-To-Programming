//
// Created by 12san on 10-08-2024.
//
#include<stdio.h>
#define size 10

void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[],int s){
    for(int i=0;i<s;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[size]={
            1,2,3,4,5,6,7,8,9,10};
    printf("Original Array:\n");
    printArray(arr,size);
    bubblesort(arr,size);
    printf("Array after Bubble sorting:\n");
    printArray(arr,size);
    return 0;
}