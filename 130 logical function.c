//
// Created by 12san on 27-04-2024.
//
#include<stdio.h>
int func(int num){
    int count=0;
    while(num){
        count++;
        num>>=1;
    }
    return(count);
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",func(num));
}


