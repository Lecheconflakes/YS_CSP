#YS 6th function notes

import random

#What a function is
        #a set of instructions that are exucuted when you have a key word.
print("this is a function")

name= input("what is your name?\n")



#Why we use functions
 #you use funtions  so dont have to rewrite it over and over again

print(f"hello {name}")

#How to write a function in Python
#The indents must match or the code will break.
#def welcome():
#    name=input("what is your name\n")
#    print(f"hello {name}")

print(f"the function is over")
    #not gonna print unless you tell it to. use the name of the function to have it work.
        #if you give the welcome before the def it will not work because it doesnt know what it is.



#What parameters and arguments are
#parameters  when you define the function
#inside the parainthiese 
# two can be in the pararmeters but needs to be speterated by comas.
 #arguments are given when we call the funtion

#How to use parameters and arguments in python
#def add(number, num_two ):
    #  number = number + num_two

#num_one = 12
#num_two = 14
#add(num_one)
#add(4, 23)
#add(9, 20)
#add(87, 12)
        #variables are used when i want to do the same thing over again.


#What return statements are
        #Its going to take what is inside your funtion and brings it back to


#How to use return statements in a program
def clean(info):
    return info.stirp().lower()

name = input("what is your name?")
color = input("what is your favorite color?")
task = input("what is your current task?")


print(f"Hello,{clean(name)}. I heard you are {clean(task)}, that is nice. The color {clean(color)} is a great choice.")

#2nd example

def believe(sentence):
    length = len(sentence)
    spot_one =random.randint(0, length, -1)
    spot_two = random.randint(0, length, -1)
    spot_three = random.randint(0, length, -1)
    full_sentence = sentence.split()
    full_sentence.insert(spot_one, "believe it!")
    full_sentence.insert(spot_two, "believe it!")
    full_sentence.insert( spot_three, "believe It!")
    






