//
// Created by 12san on 08-08-2024.
//
//
// Created by 12san on 07-08-2024.
//

#include<stdio.h>

int main() {
    int n;
    printf("Enter the size:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        printf("Enter number %d:\t", i + 1);
        scanf("%d", &arr[i]);
    }

    int *min = &arr[0];
    for(int i = 1; i < n; i++) {  // Start loop from 1 since min is initialized with arr[0]
        if(arr[i] < *min) {
            min = &arr[i];
        }
    }

    printf("Smallest value is %d and its address is: %p\n", *min, (void *)min);

    return 0;
}
