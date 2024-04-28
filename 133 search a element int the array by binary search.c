//
// Created by 12san on 28-04-2024.
//
#include<stdio.h>
int main() {
    int n, arr[10], search;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the searched element:\n");
    scanf("%d", &search);
    int first = 0;
    int last = n - 1;
    int middle = (first + last) / 2;
    while (first <= last) {
        if (arr[middle] < search) {
            first = middle + 1;
        } else if (arr[middle] == search) {
            printf("The element %d is found at location %d", search, middle + 1);
            break;
    } else{
        last = middle - 1;
    }
    middle = (first + last) / 2;
}
    if (first > last) {
        printf("NOT Found %d is not present in the list.\n", search);
    }
    return 0;
}