#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, columns;
    printf("ENTER NUMBER OF ROWS: ");
    scanf("%d", &rows);
    printf("ENTER NUMBER OF COLUMNS: ");
    scanf("%d", &columns);

    // Allocate memory for a 2D array of integers
    int **array = (int **)malloc(rows * sizeof(int *));
    if (array == NULL) {
        printf("ERROR: COULD NOT ALLOCATE MEMORY FOR THE ARRAY\n");
        return 1;
    }

    for (int i = 0; i < rows; i++) {
        array[i] = (int *)malloc(columns * sizeof(int));
        if (array[i] == NULL) {
            printf("ERROR: COULD NOT ALLOCATE MEMORY FOR THE ARRAY.\n");
            return 1;
        }
    }

    printf("ENTER THE ELEMENTS OF THE 2D ARRAY:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("THE ELEMENTS OF THE 2D ARRAY ARE:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Free the memory for the 2D array
    for (int i = 0; i < rows; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
