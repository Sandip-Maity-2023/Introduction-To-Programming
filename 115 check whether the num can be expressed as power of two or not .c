#include<stdio.h>
int main(){
    int n;
     printf("enter the number:\n");
     scanf("%d",&n);
     int temp=n,flag=0;
     while(temp>1){       //here 1 can't replaced by zero
         if(temp%2!=0){
             flag=1;
             break;
         }
         temp=temp/2;
     }
     if(flag==0)
         printf("power");
     else
         printf("not");
}