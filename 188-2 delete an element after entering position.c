//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>
int main(){
    int n,pos;
    printf("Enter the size:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++) {
        printf("Enter number %d:\t", n);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element position to deleted element :");
    scanf("%d",&pos);

    if(pos>=n+1){
        printf("Deletion not possible\n");
    }else {
        for (int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("The array after deletion:\n");
        for (int i = 0; i < n - 1; i++) {
            printf("\t%d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}