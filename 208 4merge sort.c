//
// Created by 12san on 20-12-2024.
//
#include<stdio.h>

#define size 100

int merge(int arr[], int l, int m, int r) {
    int i = l, j = m + 1, index = l, temp[size];

    while (i <= m && j <= r) {
        if (arr[i] < arr[j]) {
            temp[index] = arr[i];
            i++;
        } else {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if (i > m) {
        while (j <= r) {
            temp[index] = arr[j];
            j++;
            index++;
        }
    } else {  //here i<=mid
        while (i <= m) {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    for (int i = l; i < index; i++) {
        arr[i] = temp[i];
    }
}

void merge_sort(int arr[], int l, int r) {
    int m;
    if (l < r) {
        m = (l + r) / 2;
        merge_sort(arr, l, m);
        merge_sort(arr, m+ 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int n;
    printf("Enter no of elements:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d\t\a", arr[i]);
    }
    printf("\n");
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d\t\a", arr[i]);
    }
}