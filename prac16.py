import mysql.connector

mycon = mysql.connector.connect(host = 'localhost' , user = 'root' , password = 'yoyo' , database = 'aman')

if mycon.is_connected():
  print("MySQL connected to python sucessfully")  

  my_cursor = mycon.cursor()
  my_cursor.execute("select * from players")
  data = my_cursor.fetchall()

  for row in data:
      print(row) 

  mycon.close()

else:
    print("Connection error")




