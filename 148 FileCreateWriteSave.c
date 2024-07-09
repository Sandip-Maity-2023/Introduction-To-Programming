//
// Created by 12san on 06-07-2024.
//
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    char p;
    p=fopen(" ","w");
    printf("Enter characters & terminate with ctrl z\n":);
    do{
        ch=getchar();
        fputc(ch,p);
    }
    while(ch !=EOF){
        fputc(ch,p);
        ch=getchar();
    }
    fclose(p);
}