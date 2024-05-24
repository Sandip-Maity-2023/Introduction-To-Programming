//
// Created by 12san on 20-05-2024.
//
#include<stdio.h>
float func(float x);
int main() {
    int n = 10;
    float a, b, integral;
    scanf("%d", &a);
    scanf("%d", &b);
    int i;
    float h, x, sum = 0;
    if (b > a)
        h = -(b - a) / n;
    for ( i = 1; i < n; i++) {
        x = a + i * h;
        sum = sum + func(x);
    }
    integral = (h / 2) * (func(a) + func(b) + 2 * sum);
    printf("The interal is :%0.6f\n", integral);
    return 0;
}
float func(float x){
    return x*x;
}