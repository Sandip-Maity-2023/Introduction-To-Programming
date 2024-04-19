//
// Created by 12san on 19-04-2024.
//
#include<stdio.h>
void main(){
    int N,sum=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("sum=%d\n",sum);
}