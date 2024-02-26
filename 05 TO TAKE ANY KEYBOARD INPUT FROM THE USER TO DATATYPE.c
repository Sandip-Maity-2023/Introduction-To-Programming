#include<stdio.h>
int main(){
	char userinput[50];
	printf("Enter something:");
	scanf("%s",userinput);
	int intvalue;
	if(sscanf(userinput,"%d",&intvalue)){
	printf("DATA TYPE: INTEGER\n");
} else{
	printf("DATA TYPE: STRING\n");
}
	return 0;
}
