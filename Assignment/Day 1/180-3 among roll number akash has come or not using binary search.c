//
// Created by 12san on 10-08-2024.
//
#include<stdio.h>
#define size 74
int binarysearch(int arr[],int n,int target) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void printArray(int arr[],int n){
for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
printf("\n");
}

int main(){
    int rolls[size];
    for(int i=0;i<size;i++){
        rolls[i]=123+i;

    }
    printf("\nRoll numbers:\n");
    printArray(rolls,size);
    int target=139;
    int index= binarysearch(rolls,size,target);
    if(index !=-1){
        printf("Akash with roll number %d has come\n",target);
    }else{
        printf("Akash with roll number %d has not come\n",target);
    }
    return 0;
}