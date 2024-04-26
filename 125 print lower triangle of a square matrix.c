//
// Created by 12san on 22-04-2024.
//
#include<stdio.h>
int main(){
    int matrix[20][20];
    int r;
    printf("Enter the number of rows and columns:\n");
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i>=j)
                printf("%d",matrix[i][j]);
            else
                printf("%d",0);
        }
        printf("\n");
    }
    return 0;
}