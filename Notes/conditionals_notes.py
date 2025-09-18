#YS 6th Conditionals Notes

#What puts something inside of the “if” statement?
# the base piece of a conditional

num = int(input("tell me a whole number: "))

if num > 10:
    print(f"{num} is a single digtit number")

else:
    print(f"{num} is not a single digit number")

#What do if statements do?
    #checks a true or false statement.

#What are boolean statements? 
# or condititon 
    #always that is going to be true or false


#What do else statements do?
    #catch all statment

name = input("please tell me your name:")

if name == "Tyler, the creator":
    print("you are tyler, the creator!")
elif name == "frank ocean":
     print("you aint frank ocean")
else:
    print(f"Hello{name} you are regular perso")

#start with the least likey and end with moist likey


#What kind of statement do you use if you have more than 2 needed outcomes?


#What do each of the different symbols mean in conditionals?
 # comparation operators
    #< less than

    #> greator than

    #<= less than or equal to

    #>= greator or equal to

    #== to see if its equal # use two so it doesnt think its a varible.

    #!= not equal to

#What are the 3 logical operators?
#AND
#OR
#NOT

#What are logical operators for?
#makes sure both conditinals are true, if one is not true it will not work

if num >=0 and num <10: # and means both must be true
    print(f"{num} is a single digit number")
elif num <25 or num ==50: # or means only 1 has to be true
    print(f"wow {num} is a cool number")
elif not num < 100: # not checks if the opposit is true
    print(f"{num} is a large number")
else:
    print(f"you typed{num}")
    
#What does a nested conditional statement do?
#you can add another conditional inside of the conditional to check it, you can do ones that dont nessry connected.