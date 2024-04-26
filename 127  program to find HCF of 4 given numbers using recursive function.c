//
// Created by 12san on 25-04-2024.
//
#include<stdio.h>
int HCF(int x, int y) {
    while (x != y) {
        if (x > y) {
            return (x - y, y);
        } else {
            return (x, y - x);
        }
        return x;
    }
}
int main() {
    int a, b;
    printf("Enter the two number for the HCF:\n");
    scanf("%d %d", &a, &b);
    printf("HCF is %d of (%d,%d)", HCF(a, b), a, b);
}
