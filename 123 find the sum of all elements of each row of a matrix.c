//
// Created by 12san on 21-04-2024.
//
#include<stdio.h>
int main(){
    int matrix[20][20];
    int rows,columns;
    printf("Enter the number of rows and columns:\n");
    scanf("%d",&rows);
    scanf("%d",&columns);
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=columns;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum;
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=columns;j++){
            sum+=matrix[i][j];
        }
        printf("%d\n",sum);
    }
}
