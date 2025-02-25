#include <stdio.h>


int main() {
    int x, y, x1, y1;

    // Input matrix sizes
    printf("Enter the size of row and column of matrix A: ");
    scanf("%d %d", &x, &y);
    printf("Enter the size of row and column of matrix B: ");
    scanf("%d %d", &x1, &y1);

    // Check if multiplication is possible
    if (y != x1) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    // Declare matrices after input
    int A[x][y], B[x1][y1], C[x][y1];

    // Input matrix A
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < x1; i++) {
        for (int j = 0; j < y1; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y1; j++) {
            C[i][j] = 0;
            for (int k = 0; k < y; k++) { // k loops from 0 to y (or x1)
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resulting matrix C
    printf("Resultant Matrix (A x B):\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y1; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
