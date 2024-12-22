//
// Created by 12san on 20-12-2024.
//
#include<stdio.h>
int smallest(int arr[],int n,int k){
    int pos = k, small = arr[k];
    for(int i=k+1;i<n;i++) {
        if(arr[i]<small) {
            small = arr[i];
            pos = i;
        }
    }
    return pos;
}
int selection(int arr[],int n){
    int pos,temp;
    for(int i=0;i<n;i++){
        pos=smallest(arr,n,i);
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

int main(){
    int n;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t\a",arr[i]);
    }
    printf("\n");
    printf("Sorted array is:\n");
    selection(arr,n);
}