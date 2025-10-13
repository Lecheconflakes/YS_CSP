#include <stdio.h>

int main() {
    int age;

    // Ask for user input
    printf("How old are you: ");
    scanf("%d", &age);

    // Check conditions from least likely to most likely
    if (age >= 18) {
        printf("\nYou are old enough to vote!\n");
    } else if (age >= 16) {
        printf("\nYou are old enough to drive!\n");
    } else if (age >= 15) {
        printf("\nYou are old enough to get a learners permit!\n");
    } else if (age >= 5) {
        printf("\nYou are old enough to go to school!\n");
    } else {
        printf("\nYou are not old enough for any of these activities.\n");
    }

    return 0;
}


