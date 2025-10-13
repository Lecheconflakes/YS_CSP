 // YS 6th old enough
#include <stdio.h>

int main(){
    int age =25;

    printf("how old are you: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("you are old enough to vote.\n");
    }else if (age >= 16) {
        printf(" you can get a drivers licence.\n");
    } else if (age == 15) {
        printf("your are old enough to get a driving permit.\n");
    }else if (age >= 5){
        printf("you are old enough to go to school\n");
    } else {
        printf("go play outside you ipad kid.\n");
    }
        return 0;
}