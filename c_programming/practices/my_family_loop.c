// YS 6th My family loop

#include <stdio.h>

int main() {
    const char *people[] = {"Claudia", "Santiago", "Santiago D", "Zitlali", "jaqulilne","Gildardo" };
    int size = sizeof(people) / sizeof(people[0]);

    for(int i = 0; i < size; i++){
        printf("hello, %s\n", people[i]);
    }
    return 0;
}