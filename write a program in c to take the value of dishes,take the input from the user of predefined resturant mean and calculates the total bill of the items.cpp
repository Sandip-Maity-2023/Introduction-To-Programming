#include<stdio.h>
int main(){
	int a,qty,rate,total;
	printf("\n MENU CARD\nSELECT YOUR DRINK\n!>COFFEE\n2.TEA\n3.COLD COFFEE\n4.MILK SHAKE\n5.STALK\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\nYou have selected coffee.\nEnter the quantity:");
			scanf("%d",&qty);
			rate=5;
			total=qty*rate;
			printf("\nTotal amount:%d",total);
			break;
		case 2:
			printf("\nYou have selected tea.\nEnter the quantity:");
			scanf("%d",&qty);
			rate=10;
			total=qty*rate;
			printf("\nTotal amount:%d",total);
			break;
	    case 3:
			printf("\nYou have selected cold coffee.\nEnter the quantity:");
			scanf("%d",&qty);
			rate=15;
			total=qty*rate;
			printf("\nTotal amount:%d",total);
			break;
	    case 4:
			printf("\nYou have selected Milk shake.\nEnter the quantity:");
			scanf("%d",&qty);
			rate=25;
			total=qty*rate;
			printf("\nTotal amount:%d",total);
			break;
		case 5:
			printf("\nYou have selected Stalk.\nEnter the quantity:");
			scanf("%d",&qty);
			rate=15;
			total=qty*rate;
			printf("\nTotal amount:%d",total);
			break;
		default:
			printf("\n Sorry Unavailable................%d",a);
	}
	return 0;
}
