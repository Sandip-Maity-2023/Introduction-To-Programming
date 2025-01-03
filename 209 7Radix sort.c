//
// Created by 12san on 20-12-2024.
//
#include<stdio.h>
#include<stdlib.h>
#define size 10

int largest(int arr[],int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    return large;
}
int radix(int arr[],int n) {
    int bucket[size][size], bucket_count[size], divisor = 1;
    int i, j, k, remainder, nop = 0;
    int large = largest(arr, n);
    while (large > 0) {
        nop++;
        large = large / size;
    }
    for (int pass = 0; pass < nop; pass++) {            //initialize the buckets

        for (int i = 0; i < size; i++) {
            bucket_count[i] = 0;         // b[0]=0,b[1]=0.....
        }
            for (int i = 0; i < n; i++) {              //sort the numbers according to their passth place
                remainder = (arr[i] / divisor) % size;
                bucket[remainder][bucket_count[remainder]] = arr[i];
                bucket_count[remainder]++;
            }
            //collect the numbers after passth
            i = 0;
            for (int j = 0; j < size; j++) {
                for (int k = 0; k < bucket_count[j]; k++) {
                    arr[i] = bucket[j][k];
                    i++;
                }
            }
            divisor = divisor * size;   //1  10 100.......
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
        radix(arr,n);
        for(int i=0;i<n;i++){
            printf("%d\t\a",arr[i]);
        }

}