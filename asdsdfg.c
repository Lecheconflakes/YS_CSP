// Tic-Tac-Toe SP, YS, SB, AS
//SP-player choice, AS- game end, SB-AI and Ys- board
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

// Yaretzi Sanchez board visuals.// the numbers on the grid for user choice
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

 

void game_play(void){
    char user_input;
    char ai_choice;
    int turns = 0;
    printf("Will you pick X or O: ");
    scanf("%c", &user_input);
    if(user_input== 'X'){
        char ai_choice = 'O';
    } else if(user_input == 'O'){
        char ai_choice = 'X';
    }else{
        printf("Please choose again!");
    }
    
    char game_end[6] = "False";
    while(game_end != "False");
    if(user_input, 'X' && turns % 2 == 1){
        int player_choice;
        printf("Please pick a number between 1 and 9: ");
        scanf("%d", &player_choice);
        board(user_input, player_choice);
        turns +=1 ;}
    
    
    
    
}
int main(void){
    game_play();
    
    // adelheid 
    printf("Thank you for playing!");
    
    return 0; 
}