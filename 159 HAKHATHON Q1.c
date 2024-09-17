//
// Created by 12san on 10-07-2024.
//
#include <stdio.h>

int min_levels_to_play(int possible[], int n) {
    if (n == 0) {
        return -1;
    }

    int alice_points = 0;
    int bob_points = 0;

    // Calculate initial bob_points
    for (int i = 0; i < n; i++) {
        bob_points += possible[i];
    }

    for (int i = 0; i < n; i++) {
        if (possible[i] == 1) {
            alice_points += 1;
            bob_points -= 1;
        } else {
            alice_points -= 1;
        }

        if (alice_points > bob_points) {
            return i + 1;
        }
    }

    return -1;
}

int main() {
    int test1[] = {1, 0, 1, 0};
    int test2[] = {1, 1, 1, 1};
    int test3[] = {0, 0};

    printf("Test case 1: %d\n", min_levels_to_play(test1, 4));  // Expected output: 1
    printf("Test case 2: %d\n", min_levels_to_play(test2, 4));  // Expected output: 3
    printf("Test case 3: %d\n", min_levels_to_play(test3, 2));  // Expected output: -1

    return 0;
}
