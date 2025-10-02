#YS 6th update calculator

def ask(text):
    return float(input(text))

income = ask("What's your monthly income? ")
rent = ask("How much is your rent? ")
utilities = ask("How much do you spend on utilities? ")
groceries = ask("How much do you spend on groceries? ")
transportation = ask("How much do you spend on transportation? ")

spending_money = income - (rent + utilities + groceries + transportation)
rent_pct = (rent / income) * 100
utilities_pct = (utilities / income) * 100
groceries_pct = (groceries / income) * 100
transportation_pct = (transportation / income) * 100
savings = income * 0.10
savings_pct = 10


print(f"Your rent is ${rent:.2f}, which is {rent_pct:.2f}% of your income.")
print(f"Your utilities are ${utilities:.2f}, which is {utilities_pct:.2f}% of your income.")
print(f"Your groceries are ${groceries:.2f}, which is {groceries_pct:.2f}% of your income.")
print(f"Your transportation is ${transportation:.2f}, which is {transportation_pct:.2f}% of your income.")
print(f"You should save ${savings:.2f} a month, which is {savings_pct}% of your income.")
print(f"You have ${spending_money:.2f} left over for spending.")