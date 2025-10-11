// YS 6th name decorator
#include <stdio.h>
#include <string.h>

int main(void){
    char name[100];
    char deco_name[100];
    char decoration[] = " ⋆˙⊹❀♡";
 
    printf("Please enter your name: \n");
    scanf("%s", name);


    strcat( deco_name, decoration);
    strcat(deco_name, name);
    strcat(deco_name, decoration);
   
    printf("%s",deco_name);

    return 0;

}
