/*
   A
  ABC
 ABCDE
ABCDEFG
*/
// Created by 12san on 29-06-2024.
//
#include<stdio.h>
int main(){
    int n=4,z=1;
    for(int i=1;i<=n;i++){
        for(int j=(n-1);j>=i;j--){
            printf(" ");
        }
        for(int k=0;k<z;k++){
            printf("%c",k+65);
        }
        z+=2;
        printf("\n");
    }
    return 0;
}
