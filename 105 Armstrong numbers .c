#include<stdio.h>
#include<math.h>

int main() {
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
