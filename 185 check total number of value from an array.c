//
// Created by 12san on 07-08-2024.
//
#include<stdio.h>
int main(){
    int arr[10]={4,8,9,2,0,2,9,0};

    int index=sizeof(arr)/sizeof(arr[0]);
    printf("%d",index);

    return 0;
}