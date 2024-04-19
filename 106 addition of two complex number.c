//
// Created by 12san on 13-04-2024.
//
//complex number addition-------------------

#include"stdio.h"
void add(int x,int y,t){
    struct complex *x,*y,*t;
     t->real=x->real+y->real;
     t->imaginary=x->imaginary+y->imaginary;
}
struct complex{
    float real;
    float imaginary;
};
int main(){
    struct complex a,b,c;
    scanf("%f %f",&a.real,&a.imaginary);
    scanf("%f %f",&b.real,&b.imaginary);
    add(&a,&b,&c);
    printf("\n %f %f",c.real,c.imaginary);
}
