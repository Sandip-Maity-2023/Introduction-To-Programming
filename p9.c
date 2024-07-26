/*
   1
  121
 12321
1234321

*/
//
// Created by 12san on 29-06-2024.
//
#include<stdio.h>

int main(){
    int n=4,m=(n/2 +1),nsp=n-1,nst;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        if(i<m){
            nsp--;

        }
        printf("\n");
    }
    return 0;
}
