#include<stdio.h>
int main(){
	float temperature;
	printf("ENTER THE TEMPERATURE OF BOILING POINT OF WATER IN CELCIUS:");
	scanf("%f",&temperature);
	if(temperature>=100){
		printf("WATER IS BOILING AT %d DEGREE CELSIUS\n",temperature);
	}else{
		printf("WATER IS NOT BOILING AT %f DEGREE CELSIUS\n",temperature);
	}
}
