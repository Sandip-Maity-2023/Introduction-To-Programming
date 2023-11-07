#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Enter A=");
	scanf("%d",&a);
		printf("Enter B=");
	scanf("%d",&b);
		printf("Enter C=");
	scanf("%d",&c);
	float d=pow(a,2)+pow(b,2);
	int rt=(pow(c,2)==d)?printf("IT IS A RIGHT ANGLE TRIANGLE"):printf("IT IS NOT A RIGHT ANGLE TRIANGLE");

	
}
