#YS 6th time of day

import time

hour = time.localtime().tm_hour

if hour >= 0 and hour < 6:
    print("Good  Early morning!")
elif hour >= 6 and hour < 12:
    print("Good morning!")
elif hour >= 12 and hour < 18:
    print("Good afternoon!")
else:
    print("Good evening!")

