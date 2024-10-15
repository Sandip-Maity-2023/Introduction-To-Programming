//
// Created by 12san on 13-10-2024.
//
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    //seed the random number generator with the current time
    srand(time(0));

    //Generate a random 6-digit number
    int random_number=100000+rand()%900000;

    //print the random number
    printf("Random 6-digit number: %d\n",random_number);
    int n;

    return 0;
}