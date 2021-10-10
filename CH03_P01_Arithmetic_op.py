

## 23+34

# 1. +
# 2. -
# 3. *
# 4. /
# 5. //			# int division
# 6. %
# 7. ** 		#raise to (x^y)
a = int(input("Enter the number  : "))
b = int(input("Enter the number  : "))

c = a**b
print(a,"**",b,"=",c)

c = a/b
print(a,"//",b,"=",c)

##############
print("----------  ---------")

l = [1,2,3,4,5,6,7,8,9,0]
# print(sum(l[2:7]))

s = 0
for i in range(0,len(l)):
	# print(s)
	s+=l[i]
	print(s,l[0:i+1])


print("coder ;::: ",s)