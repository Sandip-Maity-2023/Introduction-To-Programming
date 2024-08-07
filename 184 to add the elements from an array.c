//
// Created by 12san on 07-08-2024.
//
//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>
int main(){
    int arr[10],n,sum=0;
    printf("Enter the size:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        printf("Enter number %d:\t",n);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Sum of numbers:%d\n",sum);
    return 0;
}