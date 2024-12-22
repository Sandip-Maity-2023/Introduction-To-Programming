//
// Created by 12san on 20-12-2024.
//
#include<stdio.h>
int bubble(int arr[],int n){
    int temp;
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
    for(int i=0;i<n;i++){
        printf("\n%d\a",arr[i]);
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
    bubble(arr,n);

}