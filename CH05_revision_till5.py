
code = []

n = int(input("Enter size : "));

for i in range(n):
    x = int(input("Enter element : "))
    code.append(x);

counter = 0;

for i in code:
    print("{:2}".format(i))
    if i<0:
        counter+=1; # counter = counter +1
     
print(code,counter);