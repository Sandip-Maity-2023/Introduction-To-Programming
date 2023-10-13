#include<stdio.h>
int main(){
float p,t,i,r;
printf("Enter the amount of principal:\nEnter the amount of time:\nEnter the interest rate:\n");
scanf("%f %f %f ,&p,&t,&r");
i=((p*r*t)/100);
t=(p+i);
printf("THE INTEREST IS:%.2f",i);
printf("THE TOTAL AMOUNT IS:%.2f",t);
return 0;
}

