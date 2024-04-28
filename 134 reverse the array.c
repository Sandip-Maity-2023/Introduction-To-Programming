//
// Created by 12san on 28-04-2024.
//
#include<stdio.h>
int main(){
    int n,arr[10],search;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    int temp,end;
    end=n-1;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[end];
        arr[end]=temp;
        end--;
    }
    printf("Reversed Array elements are:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}