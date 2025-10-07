// YS 6th First program c
#include <stdio.h>

int main (){
    char name[50];

    printf("please enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("hello, %s Welcome to your first C program.\n", name);
    return 0;
}