# YS 6th financial calculator

income= float(input(" whats your monthly income?\n"))

rent = float(input("what is your monthly rent?\n"))

utilities = float(input("what is your monthly spending of utilities?\n" ))

groceries = float(input("what is your monthly sending for groceries?\n"))

transportation = float(input("what is your monthly spending for transportation?\n"))

spending_money =  float(income - (rent + utilities + groceries + transportation))

total_expenses = float(income + rent + utilities + groceries + transportation)
 
rent_pct= float(rent / income) * 100
utilities_pct = float( utilities/ income) * 100
groceries_pct = float(groceries / income) * 100
transportation_pct = float(transportation / income) * 100
savings = float(income *0.10)
savings_pct = 10


print("your rent is $",rent , " and that is", rent_pct, "%, of your income " )
print("your utilities are $",utilities , "and that is", utilities_pct, "%, of your income" )
print("your groceries are $", groceries, " and that is", groceries_pct, " %, of your income")
print("your transport is $", transportation, "and that is", transportation_pct, "%, of your income")
print(" you should save", savings, " a month, that is", savings_pct, "%, of your income")
print("you should have", spending_money, "of moeny left over for spending")