//
// Created by 12san on 17-11-20
#include<stdio.h>
float f(float x){
    return 1/(1+x*x);
}
int main(){
    int n;
    float i,a,b,sum=0,h;
    int position=1;
    printf("Enter value of a & b and sub-intervals:\n");
    scanf("%f %f %d",&a,&b,&n);
    h=(b-a)/n;
    sum+=f(a)+f(b);
    for(i=a+h;i<b;i=i+h){


               sum+=2*f(i);
    }
    sum=(h*sum)/2;
    printf("Value of integral: %f",sum);

    return 0;
}