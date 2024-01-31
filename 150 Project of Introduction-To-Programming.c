#include<stdio.h>
#include<stdlib.h>
#include"ourheaderfile.h"

int AreaOfCircle(int k);

int main() {
    int a, b, z, x, y, num, n, r, k = 0, rows, cols, elements;
#define MAX_ROWS 10
#define MAX_COLS 10
    int matrix[MAX_ROWS][MAX_COLS], transpose[MAX_COLS][MAX_ROWS];
    char c;
    float ru;
    while (1) {
        printf("\nChoose the option:\n\t1.Armstrong number\t2.calculation of two number\t3.Sum of N numbers\t4.Radius of a circle\t5.ASCII value\t6.Currency converter into Dollars,Euros,Yen,Rubel.\t7.exit\t8.Transpose of Matrix calculation\t9.SGPA to percentage\n");
        scanf("%d", &z);
        if (z == 7) {
            printf("thank you for your time.");
            break;
        }
        switch (z) {
            case 1:
                printf("Enter number to check Armstrong numbers:\n");
                scanf("%d", &x);
                if (armstrong(num) == 0) {
                    printf("%d is an armstrong number.\n", num);
                } else {
                    printf("%d is not an armstrong number.\n", num);
                }
                break;
            case 2:
                printf("Enter two number:\n");
                scanf("%d %d", &a, &b);
                printf("Addition is: %d\n", sum(a, b));
                printf("Substraction is: %d\n", sum(a, b));
                printf("Multiplication is: %d\n", sum(a, b));
                printf("Division is: %d\n", sum(a, b));
                printf("Modulus is: %d\n", sum(a, b));
                break;
            case 3:
                printf("Enter the number:");
                scanf("%d", &n);
                printf("The sum of the first %d natural numbers is %d\n", n, SumOfNaturalNumbers(n));
                break;
            case 4:
                printf("Enter the number:\n");
                scanf("%d", &r);
                int area = 3.14 * r * r;
                printf("Area of radius %d of a circle is:%d", r, area);
                break;
            case 5:
                printf(" Input the character to know its ASCII value:\n");
                scanf(" %c", &c);
                printf("American Standard code for Information Interchange is:%d\n", c);
                break;
            case 6:
                printf("Enter the amount in rupees:\n");
                scanf("%f", &ru);
                printf("Amount in DOLLARS:%.2f\n", ru * 0.012);
                printf("Amount in EUROS:%.2f\n", ru * 0.011);
                printf("Amount in YEN:%.2f\n", ru * 1.77);
                printf("Amount in RUBEL:%.2f\n", ru * 1.16);
                break;
            case 8:
                    // Input the number of rows and columns
                    printf("Enter the number of rows (max %d): ", MAX_ROWS);
                    scanf("%d", &rows);
                    printf("Enter the number of columns (max %d): ", MAX_COLS);
                    scanf("%d", &cols);

                    // Input elements of the matrix
                    printf("Enter elements of the matrix:\n");
                    for (int i = 0; i < rows; i++) {
                        for (int j = 0; j < cols; j++) {
                            printf("Enter element matrix[%d][%d]: ", i, j);
                            scanf("%d", &matrix[i][j]);
                        }
                    }

                    // Printing the original matrix
                    printf("\nOriginal Matrix:\n");
                    for (int i = 0; i < rows; i++) {
                        for (int j = 0; j < cols; j++) {
                            printf("%d\t", matrix[i][j]);
                        }
                        printf("\n");
                    }

                    // Finding the transpose of the matrix
                    for (int i = 0; i < cols; i++) {
                        for (int j = 0; j < rows; j++) {
                            transpose[i][j] = matrix[j][i];
                        }
                    }

                    // Printing the transpose of the matrix
                    printf("\nTranspose of Matrix:\n");
                    for (int i = 0; i < cols; i++) {
                        for (int j = 0; j < rows; j++) {
                            printf("%d\t", transpose[i][j]);
                        }
                        printf("\n");
                    }

                    return 0;
                }
                break;
            printf("Sorry unavailable.....");
        break;
    }
}
