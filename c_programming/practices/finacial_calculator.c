// YS 6th Finacial calculator

#include <stdio.h>

int main(){

printf(".────── ⋆⋅☆⋅⋆ ──────.\n");
printf("Welome to finacial calculator\n");
printf("This program will help plan your monthly budget.\n");
printf("You will enter your income and expenses.\n ");
printf("We'll calculate How much to save\n");
printf("How much left to spend and the percent of each.\n");
printf(".────── ⋆⋅☆⋅⋆ ──────.\n");

float income,rent, utilities, groceries, transportation;
float savings, total_exp, leftover;
float rent_pct, util_pct, groceries_pct, transport_pct, savings_pct;

printf("Enter your monthly income: $");
scanf("%f", &income);

printf("enter your monthly rent/mortage: $");
scanf("%f", &rent);

printf("Enter your monthly utilities cost: $");
scanf("%f",  &utilities);

printf("enter your monthly groceries cost: $");
scanf("%f", &groceries);

printf("enter your monthly transportation cost: $");
scanf("%f", &transportation);

savings = income * 0.10;
total_exp = rent + utilities + groceries + transportation + savings;
leftover = income - total_exp;

rent_pct = (rent/income) * 100;
util_pct = (utilities / income) * 100;
groceries_pct = (groceries/ income) *100;
transport_pct = (transportation / income) * 100;
savings_pct = (savings / income) * 100;

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
 