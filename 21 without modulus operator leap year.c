//
// Created by 12san on 13-10-2024.
//

#include<stdio.h>

int divisible(int year,int divisor){
    return (year-(year/divisor)*divisor==0);
}
int main(){
    int a;

    printf("Enter the Year:\n");
    scanf("%d",&a);

if(divisible(a,400)){
    printf("The %d is leap Year.\n",a);
}else if(divisible(a,100)){
    printf("The %d is NOT leap Year.\n",a);
}
if(divisible(a,4)){
    printf("The %d is Leap Year.\n",a);
}else{
    printf("The %d is NOT leap year.\n",a);
}
return 0;
}
