def records(L):
    for i in range(5):
     print(L[i])

def func(C):
    for i in range(5): 
        if l[i][0] == C:
            print(l[i])
    
l = []
for i in range (5):
    roll_number = int(input("Enter roll number.."))
    name = input("Enter student name..")
    add = input("Enter address...")
    mobile_number = int(input("Enter number..."))
    details = [roll_number , name , add , mobile_number]
    l.append(details)

print("Details saved")
print("1. Show details of all student" )
print("2. Search student via roll number ")
ch = int(input("What you want to do.."))

if ch == 1:
    records(l)

elif ch == 2:
    choice = int(input("Enter roll number of the student"))
    func(choice)
    