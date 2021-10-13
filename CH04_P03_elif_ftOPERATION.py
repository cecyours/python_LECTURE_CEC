
exp = input("Enter the expression : ")

# a = exp[0]
# oper = exp[1]
# b = exp[2]

if "+" in exp:
	i = exp.find("+")
	a = int(exp[:i])
	b = int(exp[i+1:])
	print(a,"+",b,"=",a+b)

elif "-" in exp:
	i = exp.find("-")
	a = int(exp[:i])
	b = int(exp[i+1:])
	print(a,"-",b,'=',a-b)	

	# print(a,oper,b)
print("---------- PHASE 2-----------")

op = ["+","-","*","/","%","//"]


f = False #default value
for sign in op:
	if sign in exp:
		i = exp.find(sign)
		f = True
		break

#i = exp.find("+")
if f:
	a = (exp[:i])
	b = (exp[i+1:])
	print(a,sign,b,"=",end=" ")
	x = "print({} {} {} )".format(a,sign,b)
	exec(x)
else:
	print("operation invalid....")
	pass