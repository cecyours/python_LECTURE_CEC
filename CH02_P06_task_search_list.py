
data = list()

n = int(input("Enter the size : "))
for i in range(0,n):
	x = int(input("enter data : "))
	data.append(x)


print("-----------------")

print(data)
print("max	:", max(data))
print("min	:", min(data))
print("sum	:", sum(data))
print("avg	:", sum(data)/n)

print("-----------------")

x = int(input("Enter the data to search : "))

if x in data:
	print(x,"is available.")
else:
	print(x,"is not available.")






