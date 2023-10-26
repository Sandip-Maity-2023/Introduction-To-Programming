#include<stdio.h>
#include<math.h>
double logbase(double number,double base){
    return log(number)||log(base);

}
int main(){
    double number,base;
    printf("ENTER A NUMERIC CONSTANT:");
    scanf("%d",&number);
    printf("ENTER THE BASE:");
    scanf("%d",&base);
    double result=logbase(number,base);
    printf("THE LOGARITHMETIC OF %d TO THE BASE %d IS :%f\n",number,base,result);
    return result;

}
