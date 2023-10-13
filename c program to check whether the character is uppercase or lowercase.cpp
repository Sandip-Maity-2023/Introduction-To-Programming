#include<stdio.h>
int main(){
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z')){
		printf("%c is a lowercase letter.\n",ch);
	}else if((ch>='A' && ch<='Z')){
printf("%c is an uppercase letter\n",ch);		
	}else{
		printf("%c is alowercase letter.\n",ch);
	}
}
