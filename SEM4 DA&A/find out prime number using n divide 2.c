//
// Created by 12san on 29-01-2025.
//
#include <stdio.h>

// Function to check if a number is prime using n/2 approach
int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to print prime numbers in a given range
void print_primes_in_range(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    // Input range from user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Print prime numbers in the given range
    print_primes_in_range(start, end);

    return 0;
}
