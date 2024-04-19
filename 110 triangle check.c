//
// Created by 12san on 19-04-2024.
//
#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a < (b + c) && b < (a + c) && c < (a + b)) {
        if (a == b && b == c && c == a) {
            printf("Equilateral Triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        } else if ((a * a) + (b * b) == (c * c) || (a * a) == (b * b) + (c * c) || (b * b) == (c * c) + (a * a)) {
            printf("Right-angle triangle\n");
        } else if (a != b && a != c && b != c)
        {
            printf("scalene Triangle\n");
        }
    }
    else{
            printf("Triangle not possible\n");
    }
}