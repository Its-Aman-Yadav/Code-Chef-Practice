import mysql.connector

mycon = mysql.connector.connect(host = 'localhost' , user = 'root' , password = 'yoyo' , database = 'aman')

if mycon.is_connected():
  print("MySQL connected to python sucessfully")  

  my_cursor = mycon.cursor()
  my_cursor.execute(" delete from garments where size = 'XL' ")

  print("Available records")
  my_cursor.execute("select * from garments")
  data = my_cursor.fetchall()

  for row in data:
    print(row)

  print("Record deleted successfully")

  mycon.close()

else:
    print("Connection error")
