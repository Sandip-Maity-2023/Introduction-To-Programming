/*

*    * 
 *  *
  *
 *  *
*    *

*/
//
// Created by 12san on 29-06-2024.   //pascal's triangle
//
#include<stdio.h>

int main(){
    int n=5; //odd
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
         if(i==j || i+j==n+1){
            printf("* ");
         }else{
            printf(" ");
         }
        }
         printf("\n");
        }
    }