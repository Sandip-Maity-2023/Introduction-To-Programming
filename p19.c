/*
      *
      *
  * * * * *
      *
      *
*/
// Created by 12san on 29-06-2024.   //pascal's triangle
//
#include<stdio.h>

int main(){
    int n=7; //odd
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n/2 +1 || i==n/2 +1){
            printf("* ");
        }else{
            printf("  ");
        }
        }
        printf("\n");
    }
}
