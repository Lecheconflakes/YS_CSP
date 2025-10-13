 //YS 6th old enough practice.

#include <stdio.h>


int main(){
    int age;
    printf("how old are you?: ");
    scanf("%" &age);

    if(age >= 18) {
        printf("you are old enough to vote.\n");
    }else if (age < 18 && age < 16) {
        printf(" you can get a drivers licence.\n");
    } else if (age == 15) {
        printf("your are old enough tp get a driving permit.\n");
    }else if (age >= 4 ) {
        printf("you arent old enough for anything on this list.\n");
    }
return 0;
}