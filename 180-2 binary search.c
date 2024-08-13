#include<stdio.h>
#include<string.h>

#define n 8 // Number of stations

int binarySearch(char stations[n][20], char* target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int result = strcmp(stations[mid], target);

        if (result == 0) {
            return mid;
        }
        if (result < 0) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    char currentStation[20];
    int currentIndex, madhyamgramIndex;
    char stations[n][20] = {
            "Baranager", "Belghoria", "Dakshineswar", "dumdum", "Madhyamgram",
            "sealdah", "sodepur", "barasat"
    };

    printf("Enter the current station name:\n");
    scanf("%s", currentStation);

    currentIndex = binarySearch(stations, currentStation);
    madhyamgramIndex = binarySearch(stations, "Madhyamgram");

    if (currentIndex != -1) {
        printf("The train reached %s station.\n", currentStation);

        if (currentIndex > madhyamgramIndex) {
            printf("The train has already passed Madhyamgram station.\n");
        } else if (currentIndex == madhyamgramIndex) {
            printf("You have reached your destination: Madhyamgram.\n");
        } else {
            printf("The train has not yet reached Madhyamgram station.\n");
        }
    } else {
        printf("The station %s is not on the route from Sealdah to Barasat.\n", currentStation);
    }

    return 0;
}
