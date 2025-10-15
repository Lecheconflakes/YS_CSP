// YS 6th  time of day

#include <stdio.h>
#include <time.h>

int main(){
    int hour;
    
    printf("What is the hour in military time: ");
    scanf("%d", &hour);

    if(hour >= 0 && hour < 12){
        printf("good morning\n");
    } else if (hour >= 12 && hour <18){
        printf("good afternoon\n");
    } else if (hour >= 18 && hour <= 23){
        printf("good evening\n");
    } else {
        printf("invalid hour enter a vaild hour between 0 and 23\n");
    }
    return 0;
}
