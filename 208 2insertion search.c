//
// Created by 12san on 20-12-2024.
//
#include<stdio.h>
int insertion(int arr[],int n){
    int temp,j;
    for(int i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        //while (arr[j]<temp && j>=0){ //decreasing order
        while (arr[j]>temp && j>=0){   //increasing order
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    insertion(arr,n);
}