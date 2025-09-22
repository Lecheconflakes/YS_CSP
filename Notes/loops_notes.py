#YS 6th time and for loops

#how to find time
import datetime

current = datetime.datetime.now()
hour = current.hour 

print(f"the time is {current}")
print(f"the hour is {hour}")


#What is a loop?
#loops are things that repeat several times until a specific condition is met. Loops built incorrectly can go on forever

#What are the two types of loops?
     # for loop are when you do the same thing to every item in a list.
        #while loops have a set condistion that it will check to see if it is true and the loop will run so long as the conddition is true

#What is iteration
#teration means repeating a set of instructions in a program until a certain condition is met or for a specific number of times. It’s like telling the computer, “Keep doing this until I say stop.”



#What are lists? 
#   are our first complex data type
    #store multiplue pieces of information within the same varible

#How do you make lists in python? 
siblings = ["santi", "zitali", "jackie", "gillito", ["alesandra", "jenny"]] 
    #this is a strings, but you have a list of inters or anydata type, including other lists
    #it can also have any info just speterated by comas

#How do you make for loops in python? 
for sib in siblings:
    print("hello",sib )

# for x in range(1,21,2):
 #   print(x*3)

#How do you make while loops in python?
#while boolean statement
#code to be executed
#making sure that you have a way for the loop to stop.

import time

day = "weekday"
day_num = 2

while day == "weekday":
    print("wake up 6am")
    print("make bed")
    print("shower and get ready")
    print("make breakfast and lunch")
    print("feed dogs and kittens")
    print("leave for school")
    time.sleep(2)
    day_num += 1
    if day_num == 7:
        day = "weekend"
        day_num = 1

 