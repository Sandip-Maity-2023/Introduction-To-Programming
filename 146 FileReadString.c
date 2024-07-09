//
// Created by 12san on 06-07-2024.
//
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    char line[1000];
    while(fgets(line,1000,fptr) !=NULL){
printf("read line %s\n",line);
    }
}