#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char board[3][3];

void initializeBoard() {
    int count = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = '0' + count++;
}

void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

char checkWinner() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i];
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2];
    return ' ';
}

int isBoardFull() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O') return 0;
    return 1;
}

void computerMove() {
    int move, row, col;
    do {
        move = rand() % 9 + 1;
        row = (move - 1) / 3;
        col = (move - 1) % 3;
    } while (board[row][col] == 'X' || board[row][col] == 'O');
    board[row][col] = 'O';
}

int main() {
    int move, row, col;
    char winner = ' ';
    srand(time(NULL));

    initializeBoard();

    while (1) {
        displayBoard();
        printf("Your move (1-9): ");
        scanf("%d", &move);

        row = (move - 1) / 3;
        col = (move - 1) % 3;

        if (move < 1 || move > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        board[row][col] = 'X';
        winner = checkWinner();
        if (winner == 'X') {
            displayBoard();
            printf("You win!\n");
            break;
        }

        if (isBoardFull()) {
            displayBoard();
            printf("It's a tie!\n");
            break;
        }

        computerMove();
        winner = checkWinner();
        if (winner == 'O') {
            displayBoard();
            printf("Computer wins!\n");
            break;
        }

        if (isBoardFull()) {
            displayBoard();
            printf("It's a tie!\n");
            break;
        }
    }

    return 0;
}