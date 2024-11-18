//
// Created by 12san on 28-08-2024


#include<stdio.h>
#include<math.h>

float fun(float x){
    //return (x*x*x-3*x+1.06);
   return (2*pow(x,3)-3*x-5);
}
int main(){
    float l,a,b,c,err;
    printf("Enter the error tolerance:\nand Enter the a & b:\n");

    scanf("%f %f %f",&err,&a,&b);
    if((fun(a)*fun(b))>0){
        printf("Invalid output,must be in opposite sign");
        return -1;
    }
    do{
        c=(a+b)/2;
        if(fun(c)==0){
            printf("%f is the root",c);
            break;
        }else if(fun(a)*fun(c)<0){
            b=c;
        }else{
            a=c;
        }
        l=b-a;
    }while(l>err);
    printf("%f is the root",c);
    return 0;
}

//
// Created by 12san on 28-08-2024
/*
#include <stdio.h>
#include <math.h>

float fun(float x) {
    return (2 * pow(x, 3) - 3 * x - 5);
}

int main() {
    float l, a, b, c, err;
    int max_iter = 1000, iter = 0;

    printf("Enter the error tolerance:\n");
    printf("Enter the interval [a, b]:\n");
    scanf("%f %f %f", &err, &a, &b);

    if (err <= 0) {
        printf("Error tolerance must be greater than zero.\n");
        return -1;
    }

    if (fun(a) * fun(b) > 0) {
        printf("Invalid input: f(a) and f(b) must have opposite signs.\n");
        return -1;
    }

    do {
        c = (a + b) / 2;
        if (fun(c) == 0 || (b - a) / 2 < err) {
            printf("Root found: %.8f\n", c);
            return 0;
        }

        if (fun(a) * fun(c) < 0) {
            b = c;
        } else {
            a = c;
        }

        l = b - a;
        iter++;

        if (iter > max_iter) {
            printf("Exceeded maximum iterations. Root may not have converged.\n");
            return -1;
        }
    } while (l > err);

    printf("Root found: %.8f\n", c);
    return 0;
}
*/