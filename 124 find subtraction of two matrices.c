#include<stdio.h>

void multiplyMatrices(int rowsA, int columnsA, int columnsB, int A[][30], int B[][30], int C[][30]) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < columnsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < columnsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int matrix_A[20][30], matrix_B[30][20], matrix_C[20][20], matrix_D[20][20];
    int rows, columns;

    printf("Enter the number of rows and columns:\n");
    scanf("%d", &rows);
    scanf("%d", &columns);

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix_A[i][j]);
        }
    }

    printf("Matrix A:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix_A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < columns; i++) { // Note: Here we read the transposed B matrix
        for (int j = 0; j < rows; j++) {
            scanf("%d", &matrix_B[i][j]);
        }
    }

    printf("Matrix B:\n");
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix_B[i][j]);
        }
        printf("\n");
    }

    // Matrix addition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix_C[i][j] = matrix_A[i][j] + matrix_B[j][i]; // Performing addition between A and the transposed B matrix
        }
    }

    // Matrix subtraction
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix_D[i][j] = matrix_A[i][j] - matrix_B[j][i]; // Performing subtraction between A and the transposed B matrix
        }
    }

    // Matrix multiplication
    multiplyMatrices(rows, columns, rows, matrix_A, matrix_B, matrix_C);

    printf("Addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix_C[i][j]);
        }
        printf("\n");
    }

    printf("Subtraction:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix_D[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", matrix_C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
