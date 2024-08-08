//
// Created by 12san on 08-08-2024.
//
//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter the size:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++) {
        printf("Enter number %d:\t", n);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n/2;i++) {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
            }
    printf("The reverse array :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}