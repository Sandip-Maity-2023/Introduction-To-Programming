//
// Created by 12san on 17-11-2024.
//
#include <stdio.h>

#define f(x, y) (x + y)  // Define the differential equation

int main() {
    float x0, y0, xn, h, yn, slope;
    int n, i;

    // Initial conditions
    printf("Enter Initial Condition\n");
    printf("x0 = ");
    scanf("%f", &x0);
    printf("y0 = ");
    scanf("%f", &y0);

    // Calculation point and number of steps
    printf("Enter calculation point xn = ");
    scanf("%f", &xn);
    printf("Enter number of steps: ");
    scanf("%d", &n);

    // Calculating step size
    h = (xn - x0) / n;

    // Euler's Method
    printf("\nx0\ty0\tslope\tyn\n");
    printf("------------------------------\n");
    for (i = 0; i < n; i++) {
        slope = f(x0, y0);
        yn = y0 + h * slope;
        printf("%.4f\t%.4f\t%.4f\t%.4f\n", x0, y0, slope, yn);
        y0 = yn;
        x0 = x0 + h;
    }

    // Displaying result
    printf("\nValue of y at x = %.2f is %.3f\n", xn, yn);

    return 0;
}
