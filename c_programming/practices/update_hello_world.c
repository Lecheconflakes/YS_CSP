// Ys 6th Hello world 

#include <stdio.h> 

void greet(const char* name) {
    printf("hello %s\n", name);
}

int main(){
    greet("Dom");
    greet("Mia");
    greet("Brian");
    greet("Letty");
    greet("Suki");

    return 0;
}