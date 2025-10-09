// YS 6th string notes

#include <stdio.h>
#include <string.h>

int main(void){

    char name[100] = "Yaretzi";
    char last_name[25];
    char full_name[100];
name[2] = 'j';
    printf("please tell me your last name: \n");
    scanf("%s", last_name);

    printf("[%s], name");

    strcat(full_name, " ");
    printf("[%s]", full_name);
    strcat(full_name, last_name);
    printf("[%s]", full_name);

strcmp(last_name, "sanchez"); // returns 0 if equal

    printf("%zu\n", strlen(full_name));
    printf("%zu\n", sizeof(full_name));
    return 0;
}



//What is the difference between a string and a character?
 //char is just dealing with charaters
    // string is very spefically lists of charaters.

//What types of quotation marks do we need for a string?
    // doo=uble because single is for one letter. " " ''

//What library do we need to include to access the string functions in C?
    //#include <string.h>

//List functions the library allows us to use.
// lenght of strings
// sizeof strings

//How do we concatenate strings in C?
// strcat()
    // only with two strings
//How do we get individual characters from a string in C?
    // by using [ braclets]

// printf("[%s], name");

    //strcat(name, " ");
    //printf("[%s]", name);

    //strcat(name, last_name);
    //printf("[%s]", name);

    