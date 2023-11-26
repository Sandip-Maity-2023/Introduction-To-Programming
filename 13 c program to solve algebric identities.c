#include<stdio.h>
int main(){
	float a,b,c,s_13;
	printf("ENTER THE VALUE OF a:");
	scanf("%f",&a);
	printf("ENTER THE VALUE OF b:");
	scanf("%f",&b);
		printf("ENTER THE VALUE OF c:");
	scanf("%f",&c);
	s_13=a*a*a+b*b*b+c*c*c-3*a*b*c;
	printf("%f\n",s_13);
}
