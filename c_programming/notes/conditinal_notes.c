//YS  6th conditinal notes.
 #include <stdio.h>
#include <string.h>

int main(void){
    int grade;
    char name[50];
    printf("what is your grade: ");
    scanf("%d", &grade);

    printf("what is your name: ");
    scanf("%s", &name);


 //printf("%d\n", strcmp(name, "Ms.LaRose"));
    if(strcmp(name, "Ms.LaRose") == 0){
        printf("you dont have a grade\n");
    }else if(grade > 90){
        printf("You have an A\n");
    }else if(grade >= 80){
        printf("your have a B.\n");
    }else{
        printf("you don't have an A.\n");
    }

     return 0;
}


//What puts something inside of the “if” statement?
    // () or {}

//How are conditions written in C?
    // int main(void){
    /*int grade;
    char name[50];
    printf("what is your grade: ");
    scanf("%d", &grade);

    printf("what is your name: ");
    scanf("%s", &name);


 //printf("%d\n", strcmp(name, "Ms.LaRose"));
    if(strcmp(name, "Ms.LaRose") == 0){
        printf("you dont have a grade\n");
    }else if(grade > 90){
        printf("You have an A\n");
    }else if(grade >= 80){
        printf("your have a B.\n");
    }else{
        printf("you don't have an A.\n");
    }

     return 0;
}
*/

//How do we write elif conditions in C?
    //  else if 

//When do else conditions run?
    //when all previos statments dont meet the requement.

//What are the 3 logical operators in C?
    /*
    && and
    || or
    ! not
    *//*
    < less than
    > greator than
    <= less than or equal to
    >= greator or equal too
    == equals
    != not equals
    */