import getpass # get the passwd

from PIL import Image

passwd = "12d2"

p = getpass.getpass("Enter the passwd : ")



if p==passwd:
	print("welcome")
else:
	print("passwd invalid...")
	m = Image.open(r"/home/you/Downloads/as.jpg")
	m.show()

print(".... ... ... ....")