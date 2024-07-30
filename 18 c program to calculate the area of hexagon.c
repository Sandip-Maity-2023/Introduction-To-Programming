#include<stdio.h>
int main(){
	float side,area;
	printf("enter the value of side:\n");
	scanf("%f",&side);
	area=1.5*1.73*side*side;   //                      (3/2)*Root Over 3*side^2 = Hexagon area
	printf("The area of Hexagon:.2%f\n",area);
}
