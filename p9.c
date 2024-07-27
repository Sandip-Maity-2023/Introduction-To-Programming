/*
   1
  1 1
 1 2 1
1 3 3 1
1 4 6 4 1
*/
//
// Created by 12san on 29-06-2024.   //pascal's triangle
//
#include<stdio.h>

int main(){
    int n=5; //odd
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        int c=1;
        for(int k=1;k<=i;k++){
            printf("%d ",c);
            c=c*(i-k)/k;
        }
        printf("\n");
    }
}
