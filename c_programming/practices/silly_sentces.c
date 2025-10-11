// YS 6th silly sentences

#include <stdio.h>

int main(){
    char animal[30];
    char place[30];
    char object[30];

    printf("enter a animal: ");
    scanf("%s", animal);

    printf("enter a place: ");
    scanf("%s", place);

    printf("enter a object: ");
    scanf("%s", object);

    printf("/n One day, a mischievours %s snuck into %s and stole a shiny %s\n", animal, place, object);

    return 0;
}