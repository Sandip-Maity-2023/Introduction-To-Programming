//
// Created by 12san on 08-08-2024.
//
//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++) {
        printf("Enter number %d:\t", n);
        scanf("%d", &arr[i]);
    }
    int *min=&arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=&arr[i];
        }
    }
    printf("Address of the smallest value is :%d\n",min);
}