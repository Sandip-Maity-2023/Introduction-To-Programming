// factorial of a number
#include<stdio.h>
int main(){
	int i;
	int fact=1;
	int n;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	fact=(fact*i);
	}
	printf("FACTORIAL OF THE NUMBER IS:%d",fact);
	return 0;
}
