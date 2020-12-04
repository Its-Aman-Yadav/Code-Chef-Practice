import pickle

dict = {}
a = open('Binaryfile.txt',"wb+")
ch = "y"

while ch == "y":
  b = input("Enter student name:")
  c = int(input("Enter roll number:"))
  d = int(input("Enter marks:"))

  dict["Name"] = b
  dict["Roll_num"] = c
  dict["Marks"] = d

  pickle.dump(dict,a)

  ch = input("Want to enter more:")

a.close()