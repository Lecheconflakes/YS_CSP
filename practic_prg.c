#include <stdio.h>
#include <string.h>
void board(void){
    char board1[50] = {"-"};
    char board2[50] = {"|"};
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

    return 0;
}
