#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int is_unique = 1;

    // Get the number from the user.
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is unique.
    for (int i = 2; i < num / 2 + 1; i++) {
        if (num % i == 0) {
            is_unique = 0;
            break;
        }
    }

    // Print the result.
    if (is_unique) {
        printf("%d is a unique number.\n", num);
    } else {
        printf("%d is not a unique number.\n", num);
    }

    return 0;
}
