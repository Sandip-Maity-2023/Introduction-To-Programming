#include<stdio.h>
#include<string.h>
int main(){
    char str1[50]="HELLO!";
    char str2[100]=" HOW ARE YOU ?";
    strncat(str1,str2,14);
    printf("\nconcatenating two strings: %s\n",str1);
    return 0;
}
