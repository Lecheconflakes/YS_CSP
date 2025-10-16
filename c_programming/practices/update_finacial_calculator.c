// YS 6th Finacial calculator

#include <stdio.h>

float getinput(const char* question){
    float value;
    printf("%s", question);
    scanf("%f", &value);
    return value;
}

float getpercet(float income, float expense){
    return(expense / income) * 100;
    
}

int main(){
printf(".────── ⋆⋅☆⋅⋆ ──────.\n");
printf("Welome to finacial calculator\n");
printf("This program will help plan your monthly budget.\n");
printf("You will enter your income and expenses.\n ");
printf("We'll calculate How much to save\n");
printf("How much left to spend and the percent of each.\n");
printf(".────── ⋆⋅☆⋅⋆ ──────.\n");

float income = getinput("Enter your monthly income: $");
float rent = getinput("enter your monthly rent/mortage: $");
float utilities = getinput("Enter your monthly utilities cost: $");
float groceries = getinput("enter your monthly groceries cost: $");
float transportation = getinput("enter your monthly transportation cost: $");

float savings = income * 0.10;
float total_exp = rent + utilities + groceries + transportation + savings;
float leftover = income - total_exp;

float rent_pct = getpercet(income, rent);
float util_pct = getpercet( income, utilities);
float groceries_pct = getpercet(income, groceries);
float transport_pct = getpercet(income, transportation);
float savings_pct = getpercet(income, savings);

printf("──────Monthly Budget Summary──────\n");
printf("income:$%.2f\n", income);
printf("Savings:$%.2f that is %.0f%% of your income\n", savings, savings_pct);
printf("Rent/Mortage:$%.2f and that is %.0f%% of your income.\n", rent, rent_pct);
printf("Utilities:$%.2f and that is %.0f%% of your income.\n", utilities, util_pct);
printf("Transporaton:$%.2f and that is %.0f%% of your income.\n", transportation, transport_pct);
printf("Money left over:$%.2f\n", leftover);
printf("────────────────────────────────────\n");

return 0;

}
 