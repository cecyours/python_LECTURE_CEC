
from clrprint import * 
import time
import random

cl = ["r","y","b","g"]

for i in range(0,10):
    x = random.randint(0,3)
    if(x%2==0):
        clrprint("\n");
    clrprint("\u2030 \u2030 \u2234 \u2233 \u2823 \u3112",x,end="------------- ",clr=cl[x])
    time.sleep(0.05)

for i in range(0,200000000):
    if(i%2==0):
        print("")
    print(i*100000,end=" ")
