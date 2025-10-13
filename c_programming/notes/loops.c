// YS 6th loops and arrays notes

#include <stdio.h>


int main(void){
    int nums[] = {4,684,1 ,64, 2, 8,14,36,456,15};
    char candy [5][20] = {"skittles", "butterfingers", "reeses", "twix", "kitkat"};

    for(int x = 0; x < 11; x++){
        printf("%d\n", nums[x]);
    }

    for(int i=0; i < 5; i++){
        printf("%s, is is my favorite candy.\n", candy[i]);
    }

    for (int num =1 ; num<11; num++){
        printf("%d\n", num);
    }

    int goose = 6;
    int count = 0;
    while(count != goose){
        printf("duck\n");
        count++;
    }
    printf("goose");

      return 0;

}



//What is a loop? 
    // a loop is  repeatedly executes a block of code until a specified condition is no longer met

//What are the two types of loops?
    // for and while loops

//What is iteration
//iteration is the process of repeating a block of code multiple times

//What are arrays? 
// lists only python  uses that name, others uses arrays.

//How do you make lists in C? 
    // set data types, give how many items, curly brackets, an d cmma between each item

    // int nums [] = {4,7,8,1,2,7};


//How do you make for loops in C? 
    // Set start point end point and what we are counting by. 
    //we dont need to be conncented to an array.

//How do you make while loops in C?
/*
int goose = 6;
    int count = 0;
    while(count != goose){
        printf("duck\n");
        count++;
    }
    printf("goose");

*/