//
// Created by 12san on 14-09-2024.
//NEWTON RAPHSON METHOD

#include<stdio.h>
#include<math.h>

float f(float x){
   // return (pow(x,4)-x-10);
   return (pow(x,4)-x-10);
}
float df(float x){
    //return(4*pow(x,3)-1);
    return (4*pow(x,3)-1);
}
int main(){
float x0,x1,err,err_t;
int itr=0;
    printf("Enter the value of x0 and error tolerance:\n");
    scanf("%f %f",&x0,&err_t);
    if(err_t<=0){
        printf("Invalid Input\nError tolerance is positive number.");
        return 0;
    }
    while(1){
        itr++;
        x1=x0-f(x0)/df(x0);
        printf("Iteration: %d,x=%f\n",itr,x1);
        err=fabs(x1-x0);
        if(err<err_t){
            printf("%f is the root\n",x1);
            printf("f(x)=%f",f(x1));
            break;
        }
        x0=x1;
    }
    return 0;
}