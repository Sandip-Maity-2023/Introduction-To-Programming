//
// Created by 12san on 27-04-2024.
//
#include<stdio.h>
int linear_search(int n,int arr[],int find){
    for(int i=0;i<n;i++){
        if(arr[i]==find)
            return i;
    }
    return -1;
}
int main(){
    int arr[50],search,n,position;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter elements :");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the searching element:");
    scanf("%d",&search);
    position=linear_search(n,arr,search);  //This is because an array name,
                                               // when used as a function argument,
                                              // decays into a pointer to its first element.


                                            //So when you write linear_search(n, arr, search), the arr array is automatically converted into a pointer to its first element, and this pointer is what the linear_search function receives.

    if(position==-1)
        printf("%d is not present in the array",search);
    else
        printf("%d is present at position %d",search,position);
    return 0;
}

