#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to check if the move is valid for a rook
int isValidRookMove(int x1, int y1, int x2, int y2) {
    return (x1 == x2) || (y1 == y2);
}

// Function to check if the move is valid for a bishop
int isValidBishopMove(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) == abs(y1 - y2);
}

// Function to check if the move is valid for a queen
int isValidQueenMove(int x1, int y1, int x2, int y2) {
    return isValidRookMove(x1, y1, x2, y2) || isValidBishopMove(x1, y1, x2, y2);
}

// Function to check if the move is valid for a knight
int isValidKnightMove(int x1, int y1, int x2, int y2) {
    return (abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2);
}

int main() {
    int x1, y1, x2, y2;

    // Input the coordinates of the two squares
    printf("Enter the coordinates of the first square (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second square (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    // Check and print the validity of the move for each chess piece
    if (isValidRookMove(x1, y1, x2, y2)) {
        printf("Valid move for a Rook.\n");
    } else {
        printf("Invalid move for a Rook.\n");
    }

    if (isValidBishopMove(x1, y1, x2, y2)) {
        printf("Valid move for a Bishop.\n");
    } else {
        printf("Invalid move for a Bishop.\n");
    }

    if (isValidQueenMove(x1, y1, x2, y2)) {
        printf("Valid move for a Queen.\n");
    } else {
        printf("Invalid move for a Queen.\n");
    }

    if (isValidKnightMove(x1, y1, x2, y2)) {
        printf("Valid move for a Knight.\n");
    } else {
        printf("Invalid move for a Knight.\n");
    }

    return 0;
}

