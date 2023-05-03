import mysql.connector as mysql
db =mysql.connect(host = 'localhost' , user = 'root' , passwd = 'yoyo' , database = 'aman')
my_cursor = db.cursor()
print("\n1. Log in \n2. Sign up")
a = int(input("\nEnter your choice:  "))
if a == 1:
    user_name = input("\nEnter your username:  ")
    passwd = input("\nEnter your password:  ")
    row = my_cursor.execute("select passwd from user where name =' " +user_name+" ' ")
    if row == str(passwd):
        print("Invalid Credentials")
    
    
elif a == 2:
    user_name = input("\nEnter your username:  ")
    my_cursor.execute("select name from user where name ='"+user_name+"'")
    row = my_cursor.fetchall()
    if row is not None:
          passwd = input("\nEntre your password: ")
          cpasswd = input("\nEnter password again: ")
          if passwd == cpasswd:
              my_cursor.execute("insert into user values('"+user_name+"','"+passwd+"')")
              db.commit()
              print("\nSign up sucessfully ")
          else:
           print("Please enter correct password")
    else:
        print("not valid")
       
else:
    print("Wrong choice")











