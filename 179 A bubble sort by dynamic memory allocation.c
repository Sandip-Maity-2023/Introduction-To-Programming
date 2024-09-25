//
// Created by 12san on 06-08-2024.
//
#include<stdio.h>
#include<stdlib.h>

//function to swap
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

//function of bubble sort
void bubbleSort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

//main function
int main(){
    int n,*arr;   //here pointer to integer
    printf("Enter number of elements:\n");
    scanf("%d",&n);

    arr=(int*) malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory is not allocated yet.");
    }
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printf("Sorted array:\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}