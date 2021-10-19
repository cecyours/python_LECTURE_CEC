

# 1. break -> break the loop 
# 2. continue -> skip the remaining part of loop & continue the looping
# 3. return -> exit from block
# 4. exit -> exit from the program


# 1.... break


for i in range(11,33,3):
	if i%5==0:
		print("exit.... ",i)
		break
else:
	print("there no number with %5")

print("---------------------------------------")

for i in range(11,33,3):
	if i%5==0:
		print("exit.... ",i)
		continue
else:
	print("there no number with %5")


print("---------------------------------------")

def welcome(name):
	print("welcome ",name)
	return name+" "+name


x = welcome("jay")
print("x : ",x)

print("-----------------\u2715 \u2713 \u2713 \u2713\u2715\u2715\u2715\u2715\u2715----------------------")

exit(1)

print("--------------WELCOME-------------------------")
