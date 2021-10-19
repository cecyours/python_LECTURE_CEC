

##

# 15 : 2-14 -> 3,5

n = int(input("Enter the number : "))


i=2
f = True
while i<n:
	if n%i==0:
		print("number : ",i)
		f = False
		break
	i+=1


if f:
	print(n,"number is prime")
else:
	print(n,"number is not prime")


print("-------------------------------------------------")

start = int(input("Enter start : "))
end = int(input("Enter end : "))



for n in range(start,end+1):
	i=2
	f = True
	while i<n:
		if n%i==0:
			f = False
			break
		i+=1
	
	
	if f:
		print(n,end="| ")