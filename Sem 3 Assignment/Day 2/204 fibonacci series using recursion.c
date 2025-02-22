//
// Created by 12san on 28-08-2024.
//
#include<stdio.h>
int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonacci(n-1)+ fibonacci(n-2);
}
int main(){
    int n,i;
printf("Enter the limit of fibonacci series:\n");
scanf("%d",&n);
printf("Fibonacci series:\n");
for(i=0;i<=n;i++){
    printf("%d\t", fibonacci(i));
}
return 0;
}