// YS 6th Expresstion notes
#include <stdio.h>
#include <math.h>


int main(void){
    int year = 2025; //whole numbers
    float pi = 3.14; // decimals
    double long_pi = 3.14159265359; // decimals that are 2x as long

    printf("8/3 = %d\n", 8/3);
    printf("8/3 = %1.2f\n", 8/3.0); // specific number in decimals
    printf("2 ^ 4 = %f\n",pow(2, 4));

    printf("%f", 2.4+5);

    year += 1;
    year ++;


    return 0;
}

//What is the difference between an integer and a float in C?
    // in stores whole numbers and float stores decimals

//How does C handle integer division compared to float division?
    // int are just whole numbers and floats are decimals

//List the arithmetic operators available in C and their functions.
 /* 
    + addtion
    - subtract
    / divistion
    * multiplication
     % modulo (remainder)
*/

//What is the modulus operator, and how is it used?
// % and it rounds up the remainder after dividing two intergers.

//How do you round a float to the nearest integer in C?
    // use round() and math.h 
    // ex. round(3.6) and it turns to 4.0

//What is type casting in C? Provide an example of explicit type casting.
 // cast is specififcally starting data type
 // expliptic type casting is 


//How do compound assignment operators work in C? List three examples.
    // coumpond assinments operators in C change a variables by doing math and savong the result
/*
x += 5; adds 5 to x
y -= 3; subtracts 3 from y
z *= 2; mulitiples z by 2
*/
//What is the purpose of the math.h library? Name three functions it provides.
    // it shows you the math equations as formulas so your libary can get them and tell the coumputer what it is.
/*
sqrt() finds a sqaure root
pow() rasies a number to a power
round() rounds a float to the nearest whole number
*/

//How do you print a float with a specific number of decimal places using printf()?
    //printf("8/3 = %1.2f\n", 8/3.0); // specific number in decimals



//What happens when you mix integer and float operations in C?
    //out come will always be a float.
 