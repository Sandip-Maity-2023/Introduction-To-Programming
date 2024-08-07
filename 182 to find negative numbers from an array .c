//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>
int main(){
    int arr[10],n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        printf("Enter number %d:\t",n);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            printf("Negative number:%d\n",arr[i]);
        }
    }
    return 0;
}