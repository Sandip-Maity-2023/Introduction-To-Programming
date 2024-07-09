//
// Created by 12san on 06-07-2024.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    char filename[]="file.dat";
    fptr=fopen(filename,"w");
    if(fptr==NULL){
        printf("ERROR IN FILE CREATION");
        return 1;
    }
    fclose(fptr);
    return 0;
}