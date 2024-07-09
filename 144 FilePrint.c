//
// Created by 12san on 06-07-2024.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    fptr=fopen("hero","w");
    fprintf(fptr,"hello world\n");

}