

print("Congrats you have made it to the base of Death mountain!")
print("you have already have gotten the first two pieces of the triforce. Now you will need the last piece.")
print(" However you will need armor in order to make it up death mountain, where the last piece of the triforce is guared by a Hinox. Plus you will need water and food for the trip there.")
print("you see a small light coming from inside a little hut looking house on your right, and to your left you see a very faint path")
choice_DM = input("would you like to go to the right, small hut or left down the path?\n ").strip().lower()
while True:
    if choice_DM==("left"):
        print("you go down the faint path. it had lots of pretty colorful flowers and in one of the rose bushes you see something. You find a bottle with a  key and a small old map leading to somewhere inside. But you are running low on food, you will need to gather some soon.")
    elif choice_DM == ("right"):
        print("you make your way to the small hut. you find a chest full of food, and a few bottles of water. Yay!" )
    else:
        print("Sorry that isnt a option, please enter left or right. ")
        break

choice_2 = input("would you like to look around some more or head back to the path? type look around or head back\n ").strip().lower()
while True:
    if choice_2 ==("look around"):
        print("after looking around you found a sword! Let's head back to the path.")
    elif choice_2 ==("head back"):
        print("you head back to the path and you find a bottle in a rose bush with a key and a small map inside.")
    else:
        print("sorry that isnt an option, please enter look around or head back.")
        break
 
