# Write a python code to implement Enqueue , Dequeue , Peek , Empty , Display operations on Queue


def Enqueue(qu,item):             # Enqueue Fuction for adding elements to queueu
    qu.append(item)
    if len(qu) == 1:
        front = rear = 0
    else:
        rear = len(qu) - 1


def Dequeue(qu):                  # Dequeue Function for deleting elements from  queue
    if Is_Empty(qu):
        return "Underflow"
    else:
        item  = qu.pop(0)
    if len(qu) == 0:
        front = rear = None
    return item


def Peek(qu):                     # Peek Fuction to display frontmost element
    if Is_Empty(qu):
        return "Underflow"
    else:
        front = 0 
    return qu[front]


def Is_Empty(qu):                 # Empty Function to display queue is empty or not
    if qu == []:
         return True
    else:
        return False

def Display(qu):                  # Display Fuction to display queue
    if Is_Empty(qu):
       print("Queue is Empty")
    elif len(qu) == 1:
        print(qu[0], '<== Front , Rear')
    else:
        front = 0
        rear = len(qu) - 1
        print(qu[front],'<== Front')
        for i in range(1, rear):
            print(qu[i])
        print(qu[rear],'<== Rear')

#Main Program
Queue = []
front = None
while True:
      print("----Queue Operation----")
      print("1. Enqueue")
      print("2. Dequeue")
      print("3. Peek")
      print("4. Display Queue")
      print("5. Exit")

      ch = int(input("Enter your choice: "))

      if ch == 1 :
        item = int(input("Enter item: "))
        Enqueue(Queue,item)

      elif ch == 2:
         item = Dequeue(Queue)
         if item == "Underflow":
             print("Underflow ! Queue is empty")
         else:
             print("Dequeued item is",item)
      elif ch == 3:
         item = Peek(Queue)
         if item == "Underflow":
             print("Queue is Empty!")
         else:
             print("Front most item is ",item)

      elif ch == 4:
         Display(Queue)

      elif ch == 5:
         break

      else:
        print("Wrong choice")
















    