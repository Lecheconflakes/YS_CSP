// YS 6th Finacial calculator

#include <stdio.h>

int main(){
Printf("────── ⋆⋅☆⋅⋆ ──────\n");
printf("Welome to finacial calculator\n");
printf("This prgram will help plan your monthly budget.\n");
printf("You will enter your income and expenses.\n ") ;
printf("We'll calculate\n");
printf("How much to save\n");
printf("How much left to spend\n");
printf("And the percent of each.\n");
printf("────── ⋆⋅☆⋅⋆ ──────\n")

float income,rent, utilities, groceries, transportation;
float savings, total_exp, leftover;
float rent_pct, util_pct, groceries_pct, transport_pct, savings_pct;

printf("Enter your monthly income: $");
scanf("%f", &income);

printf("enter your monthly rent/mortage: $");
scanf("%f", &rent);

printf("Enter your monthly utilities cost: $");
scanf("%f",  &utilities);

printf("enter your monthly transportation cost: $");
scanf("%f", &transportation);

savings = income * 0.10;
total_exp = rent + utilities + groceries + transportation + savings;
leftover = income - total_exp;

printf("Monthly Budget Summary\n");
printf("income: $%.2f\n", income);
printf("Savings: $%.2f\n", savings);
printf("Rent/Mortage: $%.2f\n", rent, rent_pct);
printf("Utilities: $%.2f()")

}