# Write a python program to implement Push , Pop, Empty , Display opertions on stack


def push(stk,item):                               # Allow additions to the stack
   stk.append(item)
   top = len(stk)-1


def pop(stk):                                     # To deleting element from stack
       if stk == []:                 
         print("Underflow")
       else:
            item = stk.pop()
            if len(stk)==0:
               top=None
            else:
                 top=len(stk)
            print("Removed item is",item)


def is_Empty(stk):                                # checks whether the stack is empty or not
   if stk==[]:
      return True
   else:
      return False


def display(stk):                                 # Display whole stack
   if is_Empty(stk):
      print("Stack is empty")
   else:
      top=len(stk)-1
      print("Elements in the stack are: ")
      print(top+1,"<--Top")
      for i in range(top-1,-1,-1):
         print (str(stk[i]))


#Main Program
stk=[]
top=None

while True:
       print("----Stack operation----")
       print("1.  Push")
       print("2.  Pop")
       print("3.  IsEmpty")
       print("4.  Display stack")
       print("5.  Exit")

       ch = int(input("Enter your choice: "))
       
       if ch == 1:
              item = int(input("Enter item:"))
              push(stk,item)

       elif ch == 2:
              pop(stk)
       elif ch == 3:
              if is_Empty(stk):
                   print("Empty Stack")
              else:
                   print("Not empty")

       elif ch == 4:
              display(stk)

       elif ch == 5:
              break

       else:
              print("Wrong choice")
              



