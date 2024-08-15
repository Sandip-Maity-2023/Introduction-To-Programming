#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &m, &n);

    int arr1[m][n], arr2[m][n], sum[m][n], diff[m][n], prod[m][n];

    printf("Enter the elements of the first matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Sum of the matrices:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    printf("Difference of the matrices:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            diff[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    printf("Product of the matrices:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            prod[i][j] = arr1[i][j] * arr2[i][j];
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    return 0;
}
