//
// Created by 12san on 26-04-2024.
//
#include<stdio.h>
int binary_conversion(int num){
    if(num==0){
        return 0;
    }else{
        return (num%2)+10*binary_conversion(num/2);
    }
}

int main(){
    int num,bin;
    printf("Enter the decimal number:\n");
    scanf("%d",&num);
    bin=binary_conversion(num);
    printf("The binary equivalent of %d is %d",num,bin);
    return 0;
}
