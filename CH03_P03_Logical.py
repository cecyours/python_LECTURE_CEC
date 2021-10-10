
say = input("say it : ")

if "boy" in say and "age is 23" in say:
	print("#1 welcome")
else:
	print("#1 you are not eligable")

if "boy" in say or "age is 23" in say:
	print("#2 welcome")
else:
	print("#2 you are an absulote error")

if not not "boy" in say:
	print("Jaane be..")