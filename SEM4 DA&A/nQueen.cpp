//
// Created by 12san on 30-03-2025.
//
#include <stdio.h>
#include <stdbool.h>

#define N 4 // Change this value to set a different board size

void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", board[i][j] ? 'Q' : '.');
        }
        printf("\n");
    }
    printf("\n");
}

bool isSafe(int board[N][N], int row, int col) {
    for (int i = 0; i < col; i++) {
        if (board[row][i])
            return false;
    }

    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j])
            return false;
    }

    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j])
            return false;
    }

    return true;
}

bool solveNQueensUtil(int board[N][N], int col) {
    if (col >= N) {
        printSolution(board);
        return true;
    }

    bool res = false;
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;

            res = solveNQueensUtil(board, col + 1) || res;

            board[i][col] = 0;
        }
    }
    return res;
}

void solveNQueens() {
    int board[N][N] = {0};
    if (!solveNQueensUtil(board, 0)) {
        printf("Solution does not exist\n");
    }
}

int main() {
    solveNQueens();
    return 0;
}
