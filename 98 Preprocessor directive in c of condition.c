//
// Created by 12san on 05-01-2024.
//
#include<stdio.h>
#define condition (a>50 && a<100)
int main(){
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    if(condition)
        printf("The condition is true.");
    else
        printf("The condition is False.");
    return 0;
}