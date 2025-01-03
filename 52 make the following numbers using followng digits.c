#include <stdio.h>

int main() {
    int digits[] = {1, 9, 9, 6};
    int targets[] = {28, 32, 35, 38, 72, 73, 76, 77, 100, 1000};
    int num_digits = 4;
    int num_targets = 10;

    for (int i = 0; i < num_targets; i++) {
        int sum = 0;
        for (int j = 0; j < num_digits; j++) {
            sum += digits[j];
        }
        if (sum == targets[i]) {
            printf("MATCH FOUND: %d\n", targets[i]);
        }
    }
    return 0;
}



