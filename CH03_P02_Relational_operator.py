## Relational Operators

# s1 = input("Enter the string 1 : ")
# s2 = input("Enter the string 2 : ")

# if s1 == s2 :
# 	print("Both are same")

# if s1 > s2 :
# 	print(s1,"is greater than",s2)

from clrprint import *
clrprint("----------------------------------------",clr="p")

data = ["super","code","mohanlal","rio","python"]
code = ["super","bug","gandhi","RIO","PyTHON"]
status = list()

for i in range(len(data)):
	status.append(bool(data[i].lower()==code[i].lower()))

print("{:^10} {:^10} : {:^10}".format("data","code","status"))

clrprint("----------------------------------------",clr="p")
for i in range(len(code)):
	print("{:10} {:10} : {:10}".format(data[i],code[i],status[i]))
clrprint("----------------------------------------",clr="p")
