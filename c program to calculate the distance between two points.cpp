#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2,a,b;
	    printf("enter x1:");
	scanf("%d",&x1);
		printf("enter x2:");
	scanf("%d",&x2);
		printf("enter y1:");
	scanf("%d",&y1);
		printf("enter y2:");
	scanf("%d",&y2);
	a=(x2-x1);
	b=(y2-y1);
	float dist=sqrt(pow(b,2)-pow(a,2));
	printf("DISTANCE BETWEEN TWO POINTS IS:%f",dist);
	
}
