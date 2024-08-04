//
// Created by 12san on 01-08-2024.
//
#include<stdio.h>
#include<unistd.h>  //it is for write statement

int main(){
    int n;

    puts("hello world!1");

    if(1) for(char *s="hello world!2\n"; *s ;putchar(*s++));

    write(1,"hello world!3\n",15);
                                                                 //0 for standard stdin,1 for stdout,2 for stderr stands for standard error
    printf("\nEnter the num:");                             //character 13 + newline character
    scanf("%d",&n);
    if((n/2)*2 ==n){
        printf("The num is even.");
    }else{
        printf("the num is odd");
    }
}