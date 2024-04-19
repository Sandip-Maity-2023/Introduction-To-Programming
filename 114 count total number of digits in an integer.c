//
// Created by 12san on 19-04-2024.
//
#include<stdio.h>
int main(){
    int N,count=0,temp;
    scanf("%d",&N);
        temp=N;
        while(temp>0){
            count++;
            temp/=10;
        }
        printf("the number %d contains %d digits",N,count);
}