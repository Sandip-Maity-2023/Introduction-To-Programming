//
// Created by 12san on 04-08-2024.
//problem

#include<stdio.h>

int main(){
char ch, *pch = &ch;
int lower=0,upper=0;
    printf("Enter the character:\n");
    scanf("%c", pch);
    while (*pch != '#') {
        if (*pch >= 'A' && *pch <= 'Z') {
            *pch=*pch+32;
            upper++;
        }
        if (*pch >= 'a' && *pch <= 'z') {
            *pch=*pch - 32;
            lower++;
        }
        printf("%c\n",*pch);
        printf("\nEnter the character:\n");
        scanf("%c",pch);
    }
    printf("Total number of upper case %d:\n",upper);
    printf("Total number of lower case %d:\n",lower);
    return 0;
}