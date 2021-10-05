
collection = {2,5,2,4,3,1,5,7}
print(collection);
###########----------------------------
# list -> set -> list
data = [2,4,1,4,2,4,5,3,5,1]

## list->set
s = set(data);

print(type(s))

print("data : ",data)
print("set : ",s)
## set->list
data = list(s)
print("data : ",data)
