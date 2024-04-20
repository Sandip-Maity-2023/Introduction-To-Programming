//
// Created by 12san on 20-04-2024.
//
#include<stdio.h>
int main(){
    int arr1[20],arr2[20],array_new[40],n1,n2,size;
    printf("Enter the size of 1st array:");
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
        scanf("%d",&arr1[i]);
    printf("Enter the size of 2nd array:");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
        scanf("%d",&arr2[i]);
    for(int i=0;i<n1;i++)
        array_new[i]=arr1[i];
    size=n1+n2;
    int j;
    for(int i=0,j=n1;j<size && i<n2;++i,++j)  //This loop continues filling the merged array
                                             // array_new with the elements of the second array arr2, starting from the index n1 (end of the first array).
        array_new[j]=arr2[i];
    //printing after merging
    for(int i=0;i<size;i++){
        printf("%d\n",array_new[i]);
}}