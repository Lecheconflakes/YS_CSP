/*char board[3][3];

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



 
    void board(void){

    char board1[] = {"-"};
    char board2[] = {"|"};
    char board3[50];

    strcat(board3, board1);
    strcat(board3, board2);
    strcat(board3, board1);
    strcat(board3, board2);
    strcat(board3, board1);
    strcat(board3, board2);
    printf("%s\n", board3);
    printf("%s\n", board3);
    printf("%s\n", board3);
    
    */
#include <stdio.h>

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
