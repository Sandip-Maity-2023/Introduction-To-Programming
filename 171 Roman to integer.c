//In the context of programming, overflow refers to a condition where a calculation exceeds the maximum limit of the data type being used, causing unexpected behavior or errors. This can happen with both numerical calculations and when dealing with buffer sizes, such as strings in C.
// Created by 12san on 13-07-2024.
//
//
// Created by 12san on 13-07-2024.
//
#include <stdio.h>

int roman_to_integer(char *s) {
    int t['X' + 1] = {['I'] = 1, ['V'] = 5, ['X'] = 10, ['L'] = 50, ['C'] = 100, ['D'] = 500, ['M'] = 1000};
    int res = 0;
    for (int i = 0; s[i]; i++) {
        if (t[s[i]] < t[s[i + 1]]) {
            res -= t[s[i]];
        } else {
            res += t[s[i]];
        }
    }
    return res;
}

int main() {
    char s[100]; // Increased size for safety
    printf("Enter the Roman numeral in uppercase: ");
    scanf("%99s", s); // Read up to 99 characters to avoid overflow
    int result = roman_to_integer(s);
    printf("The integer value is: %d\n", result);
    return 0;
}
