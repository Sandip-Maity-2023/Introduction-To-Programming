#include<stdio.h>
#include<ctype.h>

float fun(float x);
void bisection(float *x, float a, float b, int *itr);

int main(){
    int itr = 0, maxmitr = 10;
    float x, a = 1.0, b = 2.0, allerr, x1;

    printf("Enter the error tolerance: ");
    scanf("%f", &allerr);

    bisection(&x, a, b, &itr);

    do {
        if(fun(a) * fun(x) < 0)
            b = x;
        else
            a = x;

        bisection(&x1, a, b, &itr);

        if((x1 - x) < allerr) {
            printf("Root = %1.4f\n", x1);
            return 0;
        }

        x = x1;
    } while(itr < maxmitr);

    return 1;
}

float fun(float x){
    return (2 * x * x * x - 3 * x - 5);
}

void bisection(float *x, float a, float b, int *itr){
    *x = (a + b) / 2;
    ++(*itr);
}
