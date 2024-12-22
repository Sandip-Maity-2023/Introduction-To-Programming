//
// Created by 12san on 20-12-2024.
//
#include<stdio.h>
int binary(int arr[],int n,int k){
    int start=0;
    int end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==k){
            printf("%d is found at location %d\n",k,mid+1);
            break;
        }
        if(arr[mid]<k)
            start=mid+1;
        if(arr[mid]>k)
            end=mid-1;
    }
    if(start>end)
        printf("%d does not exit in the list\n");
}
int main(){
    int n,k;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        printf("%d no element:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("\nYour elements are:%d\t",arr[i]);
    }
    printf("\nEnter target:\n");
    scanf("%d",&k);
    binary(arr,n,k);

}