// YS 6th name decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[35];

    printf("Please enter your name: \n");
    scanf("%s", name);

    strcat( name,"⋇⊶⊰❣⊱⊷⋇");
    printf("%s", name);
    strcat("⋇⊶⊰❣⊱⊷⋇", name);
    printf("%s", name);


    return 0;

}
