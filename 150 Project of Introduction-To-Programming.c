#include<stdio.h>
#include"ourheaderfile.h"
int main(){
    int a,b,z,x,y,num;
    printf("Choose the option :\t1.Armstrong number\t2.Area of a square\t3.Radius of a circle\t4.ASCII value\t5.calculation:\n");
    scanf("%d",&z);
    switch(z){
        case 1:
        printf("Enter number to check Armstrong numbers:");
        scanf("%d",&x);
        if(armstrong(num)==0){
        printf("%d is an armstrong number.",num);
        }else{
            printf("%d is not an armstrong number.",num);
        }
        break;
        case 2:    
    printf("Enter two number:\n");
    scanf("%d %d",&a, &b);
    printf("Addition is: %d\n",sum(a,b));
    printf("Substraction is: %d\n",sum(a,b));
    printf("Multiplication is: %d\n",sum(a,b));
    printf("Division is: %d\n",sum(a,b));
    printf("Modulus is: %d\n",sum(a,b));
    break;
 default:
        printf("Sorry unavailable.....");
        break;
}
}