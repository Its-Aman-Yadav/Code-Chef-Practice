#Write a program to append data to "myfile.txt" asking the user to input choice to enter data

a = open("Myfile.txt","a")

ch = "y"

while ch == "y":

   b = input("Enter data to add data:")

   a.write(b)

   ch = input("Want to enter more:")

a.close()
