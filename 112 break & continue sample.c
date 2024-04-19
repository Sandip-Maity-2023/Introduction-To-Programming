#include <stdio.h>

int main() {
    int i = 1;
    int fact = 1;

    while (1) {
        fact = fact * i;
        if (i < 10) {
            i++;
            continue;
        }
        printf("%d! = %d\n", i, fact);
        break;
    }

    return 0;
}
