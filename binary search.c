#include <stdio.h>

int main() {
    int n, search;


    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search:\n");
    scanf("%d", &search);

    int first = 0;
    int last = n - 1;
    int mid;
    int found = 0;


    while (first <= last) {
        mid = (first + last) / 2;

        if (arr[mid] == search) {
            printf("Element %d is found at location %d.\n", search, mid + 1);
            found = 1;
            break;
        } else if (arr[mid] < search) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }

    if (!found) {
        printf("Element %d does not exist.\n", search);
    }

    return 0;
}
