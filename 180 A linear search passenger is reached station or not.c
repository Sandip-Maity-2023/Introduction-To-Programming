//
// Created by 12san on 06-08-2024.
//
#include<stdio.h>
#include<string.h>
#define n 10

int linearSearch(char stations[n][20],char* target){
    for(int i=0;i<n;i++){
     if(strcmp(stations[i],target)==0){
         return i;
     }
    }
    return -1;
}

int main(){
    char stations[n][20]={
            "sealdah","dumdum","baranagar","Dhakshineswar","Madhamgram","barasat"
    };
    char targetStation[]="barasat";
    int index= linearSearch(stations,targetStation);

    if(index!=0){
        printf("The passenger has reached\n");
    }else{
        printf("The passenger has not reached\n");
    }
    return 0;
}