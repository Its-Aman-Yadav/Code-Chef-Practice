import pickle

a = open("Stu.dat","wb")

b = {"Rollno":1,"Name":"Aman"}
c = {"Rollno":2,"Name":"Ansh"}

pickle.dump(b,a)
pickle.dump(c,a)

print("File created sucessful")
a.close()

d = open("Stu.dat","rb")

e = pickle.load(d)
print(e)