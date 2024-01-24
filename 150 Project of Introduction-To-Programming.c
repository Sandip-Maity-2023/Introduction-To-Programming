#include<stdio.h>
#include"ourheaderfile.h"
int main(){
    int a,b;
    printf("Enter two number:\n");
    scanf("%d %d",&a, &b);
    printf("Addition is: %d\n",sum(a,b));
    printf("Substraction is: %d\n",sum(a,b));
    printf("Multiplication is: %d\n",sum(a,b));
    printf("Division is: %d\n",sum(a,b));
    printf("Modulus is: %d\n",sum(a,b));
    return 0;
}