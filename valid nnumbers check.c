//
// Created by 12san on 13-07-2024.
//
#include <stdio.h>

int main() {
    FILE *file;
    char line[256];
    int count = 0;

    file = fopen("folder.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        count++;
        if (count == 10) {
            printf("%s", line);
            fclose(file);
            return 0;
        }
    }

    fclose(file);
    if (count < 10) {
        printf("The file contains less than 10 lines\n");
    }

    return 0;
}
