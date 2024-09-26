//
// Created by 12san on 20-07-2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to determine the game result
int game(char you, char computer) {
    if (you == computer) return -1;   // draw
    if (you == 's' && computer == 'p') return 0; // lost
    if (you == 'p' && computer == 's') return 1; // win
    if (you == 'p' && computer == 'z') return 0; // lost
    if (you == 's' && computer == 'z') return 1; // win
    if (you == 'z' && computer == 's') return 0; // lost
    if (you == 'z' && computer == 'p') return 1; // win
    return -1;   // handle unexpected input
}

int main() {
    char computer, result, you;
    int your_score = 0, comp_score = 0;  // declarations

    srand(time(NULL));  // initialize random number generator

    while (1) {
        // Randomly select computer's choice
        int n = rand() % 100;  //make the random number less than 100,divided by it 100
        if (n < 33) {
            computer = 's';
        } else if (n < 66) {
            computer = 'p';
        } else {
            computer = 'z';
        }

        printf("Enter 's' for stone, 'p' for paper, 'z' for scissors (or 'q' to quit):\n");
        scanf(" %c", &you);  // added space to ignore leading whitespace

        if (you == 'q') {
            printf("Stopping the game. Goodbye!\n");
            break;
        }

        result = game(you, computer);
        if (result == -1) {
            printf("Game Draw.... Try again\n");
        } else if (result == 1) {
            printf("Congratulations!! You have won the game\n");
            your_score++;
        } else {
            printf("Oops, you have lost...\n");
            comp_score++;
        }

        printf("You chose: %c and the computer chose: %c\n", you, computer);
        printf("Your score: %d and computer score: %d\n", your_score, comp_score);
    }

    return 0;
}
