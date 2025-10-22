#include <stdio.h>
// function shoes the board with the numbered spaces.
void board(void){
    char grid[3][3] ={
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7','8','9'}
    };

    // displays the board in a 3x3 grid format
    printf("\n Tic Tac Toe Board: \n");
    for (int i = 0; i <3; i++){
        printf(" %c | %c | %c \n", grid[i][0], grid[i][1], grid[i][2]);
        if (i < 2){
            printf("---|---|---\n");
        }
    }
}
// this main function that starts the game, it calls the board function to shoe the game layout.
int main(void){
    board(); // show the board before the game starts
    game_play(); // start of the game loop
    return 0;
}