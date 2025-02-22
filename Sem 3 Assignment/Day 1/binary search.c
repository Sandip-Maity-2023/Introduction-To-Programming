#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;

    int low = 0;
    int high = size - 1;
    int mid;
    int found = 0;

    while (low <= high) {
        mid = low + (high - low) / 2;

        // Check if the key is present at the middle
        if (arr[mid] == key) {
            found = 1;
            break;
        }

        // If key is greater, ignore the left half
        else if (arr[mid] < key) {
            low = mid + 1;
        }

        // If key is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    if (found) {
        printf("Element %d found at index %d\n", key, mid);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
