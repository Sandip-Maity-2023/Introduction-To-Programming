#include<stdio.h>
#include"ourheaderfile.h"
int main(){
    int a,b,z,x,y,num,n;
    while(1){
    printf("Choose the option :\t1.Armstrong number\t2.Area of a square\t3.Sum of N numbers\t4.Radius of a circle\t5.ASCII value\t6.calculation:\t7.exit\n");
    scanf("%d",&z);
    if(z==7){
        printf("thank you for your time.");
        break;
            }
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
    case 3:
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of the first %d natural numbers is %d\n",n,SumOfNaturalNumbers(n));
    break;
    default:
        printf("Sorry unavailable.....");
        continue;
}
}
}