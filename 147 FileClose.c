//
// Created by 12san on 06-07-2024.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    char filename[]="myfile.dat";
    fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("cannot open file to write!\n");
        exit(-1);
    }
    fprintf(fptr,"hello world of filing!\n");
    fclose(fptr);
}