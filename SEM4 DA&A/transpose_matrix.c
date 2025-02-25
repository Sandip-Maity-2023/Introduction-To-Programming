#include <stdio.h>

#define N 3  // Define matrix size (3x3)

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[N][N], int transposed[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transposed[j][i] = matrix[i][j]; // Swap rows and columns
        }
    }
}

void printDiagonals(int matrix[N][N]) {
    printf("Primary Diagonal: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][i]); // Elements where i == j
    }
    printf("\n");

    printf("Secondary Diagonal: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i][N - i - 1]); // Elements where i + j = N - 1
    }
    printf("\n");
}

int main() {
    int matrix[N][N], transposed[N][N];

    // Input the matrix
    printf("Enter the elements of %dx%d matrix:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print Original Matrix
    printf("Original Matrix:\n");
    printMatrix(matrix);

    // Transpose the matrix
    transposeMatrix(matrix, transposed);

    // Print Transposed Matrix
    printf("Transposed Matrix:\n");
    printMatrix(transposed);

    // Print Diagonal Elements of Transposed Matrix
    printDiagonals(transposed);

    return 0;
}
