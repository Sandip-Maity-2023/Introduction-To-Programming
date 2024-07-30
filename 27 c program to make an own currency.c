#include<stdio.h>
int main(){
	float r;
	printf("Enter the amount in rupees:\n");
	scanf("%f",&r);
	printf("amount in DOLLARS:%.2f\n",r*0.012);
	printf("amount in EUROS:%.2f\n",r*0.011);
	printf("amount in YEN:%.2f\n",r*1.77);
	printf("amount in RUBEL:%.2f\n",r*1.16);
	return 0;
}

