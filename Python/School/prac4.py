#Write a Python code to count Small case alphabets in a file "Myfile.txt".

a = open("Myfile.txt","r")
b = a.read()
c = 0

for i in b:
    if i.islower():
        c += 1
print("Total number of small case alphabet is",c)

a.close()