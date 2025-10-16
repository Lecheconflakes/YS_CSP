#include <stdio.h>

// Function to ask for one input and return the number
float getInput(const char* question) {
    float value;
    printf("%s", question);     // Ask the question
    scanf("%f", &value);        // Save the user's answer
    return value;               // Send the number back
}

// Function to calculate percent of income
int getPercent(float income, float expense) {
    return (int)((expense / income) * 100);  // Whole number percent
}

int main() {
    // Welcome message
    printf(".────── ⋆⋅☆⋅⋆ ──────.\n");
    printf("Welcome to Financial Calculator\n");
    printf("This program will help plan your monthly budget.\n");
    printf("You will enter your income and expenses.\n");
    printf("We'll calculate how much to save,\n");
    printf("how much is left to spend, and the percent of each.\n");
    printf(".────── ⋆⋅☆⋅⋆ ──────.\n");

    // Get user inputs using the input function
    float income = getInput("Enter your monthly income: $");
    float rent = getInput("Enter your monthly rent/mortgage: $");
    float utilities = getInput("Enter your monthly utilities cost: $");
    float groceries = getInput("Enter your monthly groceries cost: $");
    float transportation = getInput("Enter your monthly transportation cost: $");

    // Calculate savings and totals
    float savings = income * 0.10;  // Save 10%
    float total_exp = rent + utilities + groceries + transportation + savings;
    float leftover = income - total_exp;

    // Calculate percentages using the percent function
    int rent_pct = getPercent(income, rent);
    int util_pct = getPercent(income, utilities);
    int groceries_pct = getPercent(income, groceries);
    int transport_pct = getPercent(income, transportation);
    int savings_pct = getPercent(income, savings);

    // Show the results
    printf("\n────── Monthly Budget Summary ──────\n");
    printf("Income: $%.2f\n", income);
    printf("Savings: $%.2f — that is %d%% of your income\n", savings, savings_pct);
    printf("Rent/Mortgage: $%.2f — that is %d%% of your income\n", rent, rent_pct);
    printf("Utilities: $%.2f — that is %d%% of your income\n", utilities, util_pct);
    printf("Groceries: $%.2f — that is %d%% of your income\n", groceries, groceries_pct);
    printf("Transportation: $%.2f — that is %d%% of your income\n", transportation, transport_pct);
    printf("Money left over: $%.2f\n", leftover);
    printf("────────────────────────────────────\n");

    return 0;
}