/*
123
456
789
---->123698745
*/
#include <stdio.h>

#define R 3  // Number of rows
#define C 3  // Number of columns

int main() {
    int arr[R][C];

    printf("Enter the elements of A:\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("Element No. [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int top = 0, bottom = R - 1, left = 0, right = C - 1;

    printf("Spiral Order Output: ");
    while (top <= bottom && left <= right) {
        // Traverse from left to right (Top row)
        for (int i = left; i <= right; i++)
            printf("%d", arr[top][i]);
        top++;

        // Traverse from top to bottom (Right column)
        for (int i = top; i <= bottom; i++)
            printf("%d", arr[i][right]);
        right--;

        // Traverse from right to left (Bottom row)
        if (top <= bottom) {  // Check to prevent duplicate printing
            for (int i = right; i >= left; i--)
                printf("%d", arr[bottom][i]);
            bottom--;
        }

        // Traverse from bottom to top (Left column)
        if (left <= right) {  // Check to prevent duplicate printing
            for (int i = bottom; i >= top; i--)
                printf("%d", arr[i][left]);
            left++;
        }
    }

    return 0;
}
