
li = [12,"Hello",None,23.43,7+7j+4]
# print(li[4]) #indexing
# print(li[1::2]) # slicing

#---------------
## iteration
student = ["rohit",12,362,72.4,"python"]

# print(student)
## way 1 : for with index
# l = len(student)
for i in range(0,len(student)):
	print(i," : ",student[i])

## way 2 : for with collection
for i in student:
	print(i)

## if statement
if None in student:
	print("welcome")
else:
	print("bye")