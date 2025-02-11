#include<stdio.h>
int main(){
	int a,b;
	printf("enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("BEFORE SWAPPING a=%\n,b=%d\n",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("AFTER SWAPPING a=%d\n,b=%d\n",a,b);
	
}
