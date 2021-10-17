

# [start:end:step]
for i in range(1,11,2):
	print(i,'=',i**2)

##
print("-------------")
x = [10,20,30,40,50,60,60,40,60,20,60,12]
data = []


for i in x:
	if i not in data:
		data.append(i)
		print(i) 

print(x)
print(data)
