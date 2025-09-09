# YS 6th string notes

print("i did it!")

#What makes something a string? 
# just a collection of symbols held together by quotation marks. 
"content of a string"
'this is also a string'

#example: 
name = input('what is your name?\n').strip().title()

#name = input('what is your name?\n').strip().capitalize()

#name = input('what is your name?\n').strip().upper()

#name = input('what is your name?\n').strip().lower()

#name = input('what is your name?\n').strip()

first_name = input("what is your first name?\n")

last_name = input
 
sentence= " the quick brown fox jumps over the lazy dog."

print("welcome to my program", name)

#why do we have strings?
  #strings are the only data that allow us to use letters


#How do stupid proofing and sanitization relate to each other?
# to keep the user from messing around with their inputs.

# a bug is any error that keeps it from running or running inproperly


#What is debugging? 
# is fixing my codes problems, hel

#How do you debug the different types of errors?
   #Syntax Error
   #like grammer in english, missspelling a variable, the computer cant read it.
   # '" forgotten comas, = or with out (), + / - *, indenting 


   #Logic Error
   #its where our code does somthing we didnt expect. this is a problem with the steps we took, too complete our process
numOne = "1" 
numTwo = "3" 
print( numOne + numTwo)


   # Run-time Error
   # a problme in the code that will break the code when it tries to run. not gonna pop up any syntax errors , code breaks when it is running
letter = "a"
int(letter)
#Describe what each of the methods below does:

#.find()
print(sentence.find("brown"))
  #finds the word or sentence
print(sentence[10:15]) #slice

#concatenate (add)



#.upper() 
name = input('what is your name?\n').strip().upper() 
  # uppercases all the letters

#.lower()name = input('what is your name?\n').strip().lower()
# lowercases all letters

#.strip()
name = input('what is your name?\n').strip()
#strips of unessary spaces

# .capitalize()
name = input('what is your name?\n').strip().capitalize()
# capitalized the frist two letters of the name 

