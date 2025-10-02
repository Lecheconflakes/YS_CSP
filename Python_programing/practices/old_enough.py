#YS 6th Old enough

age = int(input("Tell me your age?\n"))

if age >= 18:
    print("You are old enough to vote!")
elif age >= 16:
    print("You are old enough to drive!")
elif age == 15:
    print("You are old enough to get a learner's permit!")
elif age >= 4:
    print("You are old enough to go to school!")
else:
    print("Go play outside, you iPad kid.")