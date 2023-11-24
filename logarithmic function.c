#include <math.h>
#include <stdio.h>

double logbase(double number, double base) {
    return log(number) / log(base);
}

int main() {
    double number, base, logarithm;

    printf("Enter a numeric constant: ");
    scanf("%lf", &number);

    printf("Enter the base: ");
    scanf("%lf", &base);

    // Calculate the logarithm.
    logarithm = logbase(number, base);

    // Print the result.
    printf("The logarithm of %lf base %lf is %lf.\n", number, base, logarithm);

    return 0;
}
