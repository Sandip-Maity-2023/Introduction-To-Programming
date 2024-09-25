//
// Created by 12san on 25-09-2024.
//
#include<stdio.h>

int main() {
    int n, i, j, temp, min;

    // Input for array size
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input for array elements
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection sort algorithm
    for(i = 0; i < n-1; i++) {
        min = i;
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap the found minimum element with the first element
        if(min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    // Output the sorted array
    printf("Sorted array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
