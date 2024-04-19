//
// Created by 12san on 19-04-2024.
//
// 1+1/2+1/3+1/4+1/5+....+1/N
#include<stdio.h>
int main(){
    int n;
    float sum=0.0;
    printf("enter the value of N:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        sum = sum + ((float) 1 / (float) i);
    }
        printf("The sum of the series:%.2f\n", sum);
        return 0;

}