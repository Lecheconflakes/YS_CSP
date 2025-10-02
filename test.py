



print("Congrats you have made it to the base of Death mountain!")

print(" You will need armor in order to make it up death mountain, where the last piece of the triforce is guared by a Hinox. Plus you will need water and food for the trip there.")
print("you see a small light coming from inside a little hut looking house on your right, and to your left you see a very faint path")
choice_DM = input(print("would you like to go to the right, small hut or left down the path?\n")).strip().lower()
while True:
        choice_DM = input(print("would you like to go to the right, small hut or left down the path?\n")).strip().lower()
        if choice_DM=="left":
            print("you go down the faint path. it had lots of pretty colorful flowers and trees making it shaddy but still sunny. In one of  the many rose bushes, you see something. You find a small old map leading to somewhere inside. Though you need more food for the trip. lucky you find berries and some apples")
        elif choice_DM == "right":
            print("you make your way to the small hut. its a cozy little place that is being over grown by vines and flowers, you go in the wooden old door barly on its hinges. you find a chest about the size of a stool, full of food, and bottles of water, Yay lucky you! After you collect your findings, you go down the faint path. It had lots of pretty colorful flowers and trees making it shaddy but still sunny. In one of  the many rose bushes, you see something. You find a green bottle with a small old map leading to somewhere inside.")
        else:
            print("pleaser enter left or right.")
        break 
print("after following the map it leads you to a shaddy, cool hidden spot by trees and over grown green grass bushes. you make your way through the thick bushes and see armor!")
pathway_2 = input("only problem is that it is on higher ground, to get to it would you like to try and climb the loose rocks or try and find another way up? type rocks or look around.\n").strip().lower()
while True:
        pathway_2 = input("only problem is that it is on higher ground, to get to it would you like to try and climb the loose rocks or try and find another way up? type rocks or look around.\n").strip().lower()
        if pathway_2 == "look around":
            print(" after some walking and lookin around you find this little dirt up hill path, how conveinet! you go up this little dirt path and you make it up to the shinny armor! and its a perfect fit, well almost. but now you have everytging to climb Death moutain!")
        elif pathway_2 == "rocks":
            print("you try and climb the rocks but you fall. lets look around for another way up. After a while you find this little dirt path and you make it up to the shinny armor! and its a perfect fit, well almost. but now you have everytging to climb Death moutain! ")
        else:
            print("please enter rocks or look around.")
            break
print("you make your way up Death mountain and by a good pace you have already reached the top! Now you must defeat the Hinox in order to get the last Triforce piece.")
while True:
        start_fight = input("enter start to being fight\n").strip().Upper()
        if start_fight == "START":
            print("the battle starts and after around 10 mintues you manage to defeat the hinox, even if it was a close one. Yay!")
        else:
            print("please enter start")
            break
    
print("now that the hinox is defeated you climb the moutain a little further, the path is much more nicer now, it has grass on the sides and flowers here and there. once up on the top of death mountain your find the last piece of the triforce!")
pick_upTriforce = input(" enter pick up to pickup the last piece of the triforce!\n").strip().lower()
while True:
        pick_upTriforce = input(" enter pick up to pickup the last piece of the triforce!\n").strip().lower()
        if pick_upTriforce == "pick up":
            print(">>>Congrats you have acquired all 3 pieces of the triforce!<<<")
        else:
            print("please enter pick up.")
            break