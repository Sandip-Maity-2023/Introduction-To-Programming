//
// Created by 12san on 06-08-2024.
//
#include<stdio.h>
#include<string.h>
#define n 10
int binarySearch(char stations[n][20],char* target){
    int left=0;
    int right=n-1;
    while(left<=right) {
        int mid = left + (left + right) / 2;
        if(strcmp(stations[mid],target)){
            return mid;
        }
    }
    return -1;
}
int main(){
    char stations[n][20]={
            "sealdah","dumdum","baranager","Dakshineswar","sodepur","Madhyamgram","barasat"
    };
    char targetStation[]="dumdum";
    int index=binarySearch(stations,targetStation);
    if(index !=-1){
        printf("THE PASSENGER HAS REACHED\n");
    }else{
        printf("THE PASSENGER HAS NOT REACHED\n");
    }
    return 0;
}