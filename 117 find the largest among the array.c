//
// Created by 12san on 20-04-2024.
//
#include<stdio.h>
int main(){
    int arr[1],n;           //arr[1] size accepts 4 elements and assuming an integer is 4 bytes,sizeof(arr)=400 bytes;sizeof(arr[0]) equals to 4 bytes (size of one integer)
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements pf array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if (largest<arr[i]){
            largest=arr[i];
        }
           }
    printf("The largest element of the array is:%d\n",largest);
}
