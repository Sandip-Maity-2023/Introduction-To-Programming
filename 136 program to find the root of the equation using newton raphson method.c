#include <stdio.h>
#include <math.h>

float f(float x);
float df(float x);

int main() {
    int itr, maxmitr;
    float x0 = 1, x1, h, epsilon;

    printf("Enter the maximum number of iterations: ");
    scanf("%d", &maxmitr);

    printf("Enter the desired precision: ");
    scanf("%f", &epsilon);

    for (itr = 1; itr <= maxmitr; itr++) {
        h = f(x0) / df(x0);

        // Stopping criterion: check if the change is within desired precision
        if (fabs(h) < epsilon) {
            printf("Root=%8.6f\n", x0);
            return 0;
        }

        x1 = x0 - h;
        x0 = x1;
    }

    printf("Root=%8.6f\n", x1);
    return 0;
}

float f(float x) {
    return x * x * x - 2 * x - 3;
}

float df(float x) {
    return 3 * x * x - 2;
}
