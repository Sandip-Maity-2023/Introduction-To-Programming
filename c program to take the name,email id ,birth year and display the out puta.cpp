#include<stdio.h>
int main(){
	char n,p,e;
	int b;
	printf("ENTER YOUR NAME:\n");
	scanf("%s",&p);
	printf("ENTER YOUR EMAIL ID:\n");
	scanf("%s",&e);
	printf("ENTER YOUR BIRTH YEAR:\n");
	scanf("%d",&b);
	int age=2023-b;
	printf("\n..........DETAILS OF YOU.................\n\n");
	printf("YOUR NAME IS:%s\n",&p);
	printf("YOUR EMAIL ID IS:%s\n",&e);
	printf("YOUR AGE IS:%d\n",&age);
}
