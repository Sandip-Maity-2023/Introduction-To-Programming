//
// Created by 12san on 19-09-2024.
//
#include<stdio.h>
#include<math.h>

int main(){
    int arr1[10][10],arr2[10][10],i,j,m,n;
    printf("Enter size of row and column:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of matrix 1:\n");
    for(int i=1;i<=m;i++) {
        for (int j = 1; j <= n; j++) {
            printf("Element %d row %d col:\n", i, j);
            scanf("%d",&arr1[i][j]);
        }
    }
   /* for(int i=0;i<m;i++) {
        for (int j = 0; j < n; j++) {
            printf("Element %d row %d col:\n", i + 1, j + 1);
            scanf("%d",&arr2[i][j]);
            printf("Enter the elements of matrix 2:\n");
        }
    }
    */
    printf("Matrix 1:\n");
    for(int i=1;i<=m;i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ",arr1[i][j]);
            }
        printf("\n");
    }
    /*
    printf("Matrix 2:\n");
    for(int i=0;i<m;i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
     */

            if ((fabs(arr1[1][1]) > (fabs(arr1[1][2]) + fabs(arr1[1][2]))) && (fabs(arr1[2][2]) > (fabs(arr1[2][1]) + fabs(arr1[2][3]))) && (fabs(arr1[3][3]) > (fabs(arr1[3][1]) + fabs(arr1[3][2])))){
                printf("upper triangular\t");
            }else{
                printf("not zero\t");
            }

}