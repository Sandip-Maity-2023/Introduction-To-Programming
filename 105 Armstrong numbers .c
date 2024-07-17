#include<stdio.h>
#include<math.h>

/*
 * int main() {
    int n, d, c, s = 0, t = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Counting the number of digits
    t = n;
    for (c = 0; t > 0; c++, t /= 10);

    // Reset t for further use
    t = n;

    // Summing digits raised to the power of the count of digits
    while (t > 0) {
        d = t % 10;
        s += pow(d, c);
        t /= 10;
    }

    printf("The sum of digits raised to the power of count of digits:armstrong %d\n", s);

    return 0;
}
*/
#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num, remainder, result = 0, n = 0;

    // Calculate the number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    // Calculate the sum of digits raised to the power of n
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    // Check if the result is equal to the original number
    return (result == num);
}

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
