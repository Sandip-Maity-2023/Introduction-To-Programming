//
// Created by 12san on 07-08-2024.
//
//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>
int main(){
    int arr[10],n,max,min;
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        printf("Enter number %d:\t",n);
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The maximum number is: %d\n",max);
    printf("The minimum number is :%d\n",min);
    return 0;
}