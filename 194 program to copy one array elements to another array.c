//
// Created by 12san on 13-08-2024.
//
#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n], arr1[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter %d no element:\n", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        arr1[i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr1[i]);
    }
}