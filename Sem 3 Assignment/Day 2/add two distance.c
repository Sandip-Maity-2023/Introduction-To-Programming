//
// Created by 12san on 28-08-2024.
//
#include<stdio.h>
struct distance{
    float foot;
    float inch;
}d1,d2,sum;
int main(){
    printf("Enter 1st foot & inch:\n");
    scanf("%f %f",&d1.foot,&d1.inch);
    printf("Enter 2nd foot & inch:\n");
    scanf("%f %f",&d2.foot,&d2.inch);
    sum.foot=d1.foot+d2.foot;
    sum.inch=d1.inch+d2.inch;
    while(sum.inch>=12){
        sum.inch-=12;
        sum.foot++;
    }
    printf("%.2f %.2f",sum.foot,sum.inch);
    return 0;
}