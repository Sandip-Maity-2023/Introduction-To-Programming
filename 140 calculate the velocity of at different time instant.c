//
// Created by 12san on 20-05-2024.
 /*
Time(t)  s         10 15 18 22 30
Velocity v(t) m/s  22 26 35 48 68    */
#include<stdio.h>
 int main(){
     float t[100]={10,15,18,22,30},v[100]={22,26,35,48,68};
     float a;
     printf("Enter the time to get velocity:");
     scanf("%f",&a);
     int i,j;
     float b,c,k=0;
     for(i=0;i<5;i++){
         b=1;
         c=1;
         for(j=0;j<5;j++){
             if(j!=i){
                 b=b*(a-t[j]);
                 c=c*(t[i]-t[j]);
             }
         }
         k=k+((b/c)*v[i]);
     }
     printf("%.2f",k);
     return 0;
 }
