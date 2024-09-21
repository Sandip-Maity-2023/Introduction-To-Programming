//
// Created by 12san on 21-09-2024.
//
#include <stdio.h>
#include <time.h>

void printClock(int hours, int minutes, int seconds) {
    printf("  %02d:%02d:%02d  \n", hours, minutes, seconds);
    printf(" ------------- \n");
    printf("|    12     3  |\n");
    printf("|   \\ | /   \\ |\n");
    printf("| 11-- . --  1 |\n");
    printf("|   / | \\   / |\n");
    printf("|   10    2   4|\n");
    printf("|   / | \\   / |\n");
    printf("|  9---.---  5 |\n");
    printf("|   \\ | /   /  |\n");
    printf("|    8     6   |\n");
    printf(" ------------- \n");
    printf("      7         \n");
}

int main() {
    while (1) {
        // Get current time
        time_t rawtime;
        struct tm *timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);

        int hours = timeinfo->tm_hour;
        int minutes = timeinfo->tm_min;
        int seconds = timeinfo->tm_sec;

        // Print the clock
        printClock(hours, minutes, seconds);

        // Wait for one second before updating the clock
        // Note: This delay function might not be available on all systems
        // You can use platform-specific methods for delaying on other systems
        // For Windows, you can use Sleep(ms)
        // For Unix-based systems, you can use usleep(microseconds)
        _sleep(1000); // Sleep for 1000 milliseconds (1 second)

        // Clear the console (Note: Platform-specific)
        system("cls");
    }

    return 0;
}
