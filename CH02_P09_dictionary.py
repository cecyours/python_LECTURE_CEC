#key:value
data = {'name':"jay",'rollno':32,"marks":99.22}

print(data["name"])
print(data)
data["name"] = "JayVyas"
print("------------")

for i in data:
	print("{:>10} : {}".format(i,data[i]))
