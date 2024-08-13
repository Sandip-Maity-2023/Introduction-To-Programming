//
// Created by 12san on 13-08-2024.
//
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        printf("Enter %d no element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int index=sizeof(arr)/sizeof(arr[0]);
    float average=sum/index;
    printf("average: %.2f\n",average);
}