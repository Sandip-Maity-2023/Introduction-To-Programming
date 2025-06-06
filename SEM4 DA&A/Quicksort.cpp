//
// Created by 12san on 07-05-2025.
//
#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Partition function to place the pivot in its correct position
int partition(int arr[], int beg, int end) {
    int pivot = arr[end];   // Pivot element
    int i = beg - 1;         // Index of smaller element

    for (int j = beg; j <= end - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}

// Quick Sort function
void quickSort(int arr[], int beg, int end) {
    if (beg < end) {
        int p = partition(arr, beg, end);
        quickSort(arr, beg, p - 1);
        quickSort(arr, p + 1, end);
    }
}

// Function to print the array
void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// Main function

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted Array:\n");
    print(arr, n);

    // Sort the array
    quickSort(arr, 0, n - 1);

    printf("\nSorted Array:\n");
    print(arr, n);
    return 0;
}