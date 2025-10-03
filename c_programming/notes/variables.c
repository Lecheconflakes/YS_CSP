// YS 6th variables notes
#include <stdio.h>

int main(void){

    int num;
    float pi = 3.41; // constants cannot be chnaged
    char grade; // will only hold 1 letter
    char name[20];
    // bool passing = true;

printf("what is your letter grade: ");
scanf("%c", &grade);

printf("tell me a number: ");
scanf("%d", &num);
//  input lets me get a space
printf("tell me a your name: ");
fgets(name, sizeof(name), stdin);


    printf("%d\n", num); 
    printf("%s has a %c grade in this class\n", name, grade);

    return 0;
}
//What is the main difference between declaring variables in Python and C?
    
    // in c you need to set what type of data the variable will hold
            // staic = data types for variables don't change
    // dynaimc is used in python

//In C, what is the purpose of specifying a data type when declaring a variable?
        // make sure the first thing we do is tell the computer the info.
    // % is the key to the computer as a place holder


//List three common data types used in C and their corresponding format specifiers for printf().
 // int 4 bytes -d
        // float 6 -f
        // double 8 -lf
        // char 1 bytes -c
        // !! list of characters are for a string -s

//How do you declare and initialize an integer variable named "age" with the value 25 in C?
    //



///What is the difference between printf() and scanf() functions in C?



//How do you add comments in C?
        /* 
        multi line comment
        */
//What is the purpose of the #include <stdio.h> line at the beginning of a C program?



//In C, what is the significance of the main() function?



//What is the difference between %d and %f format specifiers in printf()?



//How do you print a newline character in C?



//What is the purpose of the & symbol when using scanf() to get user input?



//How do you declare a constant in C? Provide an example.
