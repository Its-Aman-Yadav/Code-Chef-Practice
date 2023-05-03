#Write a Python code to transfer the contents of "Myfile.txt" to "Newfile.txt" having length equals to 6.

a = open("Myfile.txt","r+")
b = open("Newfile.txt","w+")

c = a.read()
d = c.split()

for i in range (len(d)):
     if len(d[i]) == 6:
      b.write(d[i])

a.close()
b.close()
