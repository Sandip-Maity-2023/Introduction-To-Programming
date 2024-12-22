//
// Created by 12san on 20-12-2024.
//
#include<stdio.h>
#define size 100
int merge(int arr[],int beg,int mid,int end){
    int i=beg,j=mid+1,index=beg,temp[size];
    while(i<=mid && j<=end){
if(arr[i]<arr[j]){
    temp[index]=arr[i];
    i++;
}else{
    temp[index]=arr[j];
    j++;
}
index++;
    }
    if(i>mid){
        while(j<=end){
            temp[index]=arr[j];
            j++;
            index++;
        }
    }else{
        while(i<=mid){
            temp[index]=arr[i];
            i++;
            index++;
        }
    }
    for(int i=beg;i<index;i++){
        arr[i]=temp[i];
    }
}
void merge_sort(int arr[],int beg,int end){
    int mid;
    if(beg<end){
        mid=(beg+end)/2;
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}
int main(){
    int n;
    printf("Enter no of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d\t\a",arr[i]);
    }
    printf("\n");
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\t\a",arr[i]);
    }
}