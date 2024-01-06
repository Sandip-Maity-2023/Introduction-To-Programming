//
// Created by 12san on 06-01-2024.
//
//
// Created by 12san on 06-01-2024.
//
#include<stdio.h>
#include"myheaderfile.h"
int main() {
    int a, b;
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    printf("%d\n", sum(a, b));
    printf("%d\n", sub(a, b));
    printf("%d\n", multiply(a, b));
    printf("%d\n", divide(a, b));
    return 0;
}
