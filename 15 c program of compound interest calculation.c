#include<stdio.h>
#include<math.h>
int main(){
	float p,r,t,i,total;
	printf("ENTER THE AMOUNT OF PRINCIPAL:\nENTER THE ANNUAL INTEREST RATE:\nENTER THE NUMBER OF TIME:\n ");
	scanf("%f %f %f",&p,&r,&t);
	i=(p*((pow((1+r/100),t))));
	total=p+i;
	printf("INTEREST IS:%.2f\n",i);
	printf("TOTAL AMOUNT IS:%.2f\n",total);	
}
