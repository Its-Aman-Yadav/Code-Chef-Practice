import mysql.connector as sqlctr
from datetime import datetime
import time

mycon = sqlctr.connect(host='localhost', user='root', password='yoyo',database='aman')
if mycon.is_connected():
    print('\n')
    print('Successfully connected to localhost')
else:
    print('Error while connecting to localhost')
cursor = mycon.cursor(buffered=True)


def command(st):
    cursor.execute(st)


def fetch():
    data = cursor.fetchall()
    for i in data:
        print(i)


def all_data(tname):
    li = []
    st = 'desc '+tname
    command(st)
    data = cursor.fetchall()
    for i in data:
        li.append(i[0])
    st = 'select * from '+tname
    command(st)
    print('\n')
    print('-------ALL_DATA_FROM_TABLE_'+tname+'_ARE-------\n')
    print(tuple(li))
    fetch()

def detail_burrower(name,contact):
    tup=('SN','borrowers_name','book_lent','date','contact_no')
    print('\n---Details for borrower '+name+'---\n')
    print(tup)
    st='select * from borrower where borrowers_name like "{}" and contact_no={}'.format(name,contact)
    command(st)
    fetch()


def days_between(d1, d2):
    d1 = datetime.strptime(d1, "%Y-%m-%d")
    d2 = datetime.strptime(d2, "%Y-%m-%d")
    global days
    days=abs((d2 - d1).days)


def price_book(days,book_name):
    st1 = 'select Price_Per_Day from books where Book_Name="{}"'.format(book_name)
    command(st1)
    data = cursor.fetchall()
    for i in data:
        global t_price
        t_price=int(i[0])*days
        print('No. of days {} book is kept : {}'.format(book_name,days))
        print('Price per day for book {} is Rs.{}'.format(book_name,i[0]))
        print('Total fare for book '+book_name +'-',t_price)

def lend():
    flag='True'
    while flag=='True':
        print('\n___AVAILABLE BOOKS___\n')
        st0 = 'select Book_Name from books where Quantity_Available>=1'
        command(st0)
        fetch()
        st1='select max(SN) from borrower'
        command(st1)
        data_sn=cursor.fetchall()
        for i in data_sn:
            SN=i[0]+1        
        book_selected=str(input('Enter name of book from above list : '))
        borrowers_name=str(input('Enter Borrower Name : '))
        date=str(input('Enter date (YYYY-MM-DD) : '))
        contact=int(input('Enter contact no. : '))
        st_insert='insert into borrower values({},"{}","{}","{}",{})'.format(SN,borrowers_name,book_selected,date,contact)
        command(st_insert)
        st_quantity='select quantity_available from books where book_name="{}"'.format(book_selected)
        command(st_quantity)
        data_quantity=cursor.fetchall()
        for quantity in data_quantity:
            qty=quantity[0]-1
        st_dec='update books set quantity_available={} where book_name="{}"'.format(qty,book_selected)
        command(st_dec)
        dec=str(input('Do you want to add more records (Y/N) : '))
        if dec.upper=="Y":
            flag= 'True'
        else:
            flag='False'
        

def borrowers():
    print('\n\n___OPTIONS AVAILABLE___\n\nEnter 1 : To Show detail of all borrowers \nEnter 2 : To check detail of a particular borrower \nEnter 3 : To calculate total fine of a borrower')
    dec = input('enter your choice-')
    if dec=='1':
        all_data('borrower')
    elif dec=='2':
        name = str(input('\nenter borrower name-'))
        contact = str(input('enter borrower contact no.-'))
        detail_burrower(name,contact)
    elif dec=='3':
        tfine()
    else:
        print("Wrong choice")

def tfine():
    name=str(input('\nEnter borrower name : '))
    contact=input('Enter borrower contact_no : ')        
    detail_burrower(name, contact)
    st1 = 'select book_lent from borrower where borrowers_name ="{}" and contact_no={}'.format(name,contact)
    command(st1)
    data=cursor.fetchall()
    for i in data:
        book_name=i[0]
        st2 = 'select date from borrower where borrowers_name="{}" and book_lent="{}"'.format(name,book_name)
        command(st2)
        data1=cursor.fetchall()
        for date in data1:
            date_taken=date[0]
            date_return = str(input('\nEnter returning date for book "{}" (YYYY-MM-DD) , Press ENTER to skip-'.format(book_name)))
            while date_return!='':
                days_between(str(date_return),str(date_taken))
                price_book(days,i[0])
                print('\nEnter Y : If Rs.{} is paid and book is returned.\nEnter N : If fare is not paid and book is not returned.'.format(t_price))
                dec=str(input('Enter (Y?N) : ')) 
                if dec.upper()=="Y":
                    st= 'select SN , Quantity_Available from books where Book_Name ="{}"'.format(i[0])
                    command(st)
                    data2=cursor.fetchall()
                    for price in data2:
                        update('books', 'Quantity_Available',price[1]+1,price[0])
                    st_del = 'delete from borrower where borrowers_name="{}" and book_lent="{}"'.format(name,book_name)
                    command(st_del)
                    break
                else:
                    print("\n\nPLEASE PAY THE FARE AND RETURN BOOK AFTER READING.\n\n")
                    break
        

def insert():
    flag = 'true'
    while flag=='true':
        licol=[]
        li1=[]
        li_val=[]
        command('desc books')
        data=cursor.fetchall()
        for i in data:
            licol.append(i[0])   
        command('select max(SN) from books')
        dta=cursor.fetchall()
        for j in dta:
            li_val.append(j[0]+1)
        for k in range(1,4):
            val = str(input('Enter '+licol[k]+'-'))
            li_val.append(val)
        li1.append(tuple(li_val))
        values = ', '.join(map(str, li1))
        st1 = "INSERT INTO books VALUES {}".format(values)
        command(st1)
        all_data('books')
        print('\n')
        print("\nDATA INSERTED SUCCESSFULLY\n")
        dec = str(input('Do u want to insert more data?(Y/N)-'))
        if dec.upper() == "Y":
            flag='true'
        else:
            flag='false'

def update(tname,col1,post_value,pre_value):
    st = str('update %s set %s=%s where SN=%s') % (tname, col1, "'%s'", "'%s'") % (post_value, pre_value)
    command(st)
    all_data(tname)
    print('\nVALUE UPDATED SUCCESSFULLY')
     
def Text_File():
    cursor.execute("select * from books")
    row = cursor.fetchall()
    a = open("Books.txt","w")
    a.write(str(row))
    print("File created Succesfully")
    a.close()

def Books_file():
    cursor.execute("select * from borrower")
    row = cursor.fetchall()
    a = open("Books.txt","w")
    a.write(str(row))
    print("File created succesfully")
    a.close()

# Main program
print("\n1. Log in \n2. Sign up")
a = int(input("\nEnter your choice:  "))
if a == 1:
 user_name = input("\nEnter your username:  ")
 passwd = input("\nEnter your password:  ")
 row = cursor.execute("select passwd from user where name =' " +user_name+" ' ")
 if row == str(passwd):
        print("Invalid Credentials")
 else:
    print("Logging in...")

    while True:
           print('\n')
           print('==============================================================================================')

           print("                           WELCOME TO LIBRARY MANAGEMENT                                      ")

           print('==============================================================================================')  
   
           print("\nEnter 1 : To View details of all available Books\nEnter 2 : To check detail of a particular book\nEnter 3 : To lend a book \nEnter 4 : To add new books in list \nEnter 5 : To update data \nEnter 6 : To view details of borrowers \nEnter 7 : To make a file of Books,\nEnter 8 : To make a file of Borrowers,\nEnter 9 : Log out")                                      
           dec = input("Enter your choice: ")

           if dec == '1':
               all_data('books')
           elif dec=='2':
               tup=('SN','Book_Name','Quantity_Available','Price_Per_Day')
               tup1 = ('SN', 'borrowers_name', 'book_lent', 'contact_no')
               in1=str(input('enter first name , last name or middle name of a book-'))
               print('\n___ALL DATA OF BOOKS HAVING "{}" IN THEIR NAME FROM BOTH TABLE____'.format(in1))
               st =str('select * from books where book_name like "{}"'.format('%'+in1+'%'))
               st1=str('select * from borrower where book_lent like "{}"'.format('%'+in1+'%'))
               print('\n__DATA FROM TABLE BOOKS__\n')
               command(st)
               print(tup)
               fetch()
               print('\n__DATA FROM TABLE BORROWER__\n')
               command(st1)
               print(tup1)
               fetch()
               print()
        
           elif dec == '3':
             lend()
           elif dec=='4':
             insert()
           elif dec=='5':
               flag='true'
               while flag=='true':
                   tname = 'books'
                   li = []
                   st1 = 'desc '+tname
                   command(st1)
                   data = cursor.fetchall()
                   for i in data:
                       li.append(i[0])
                   all_data(tname)
                   print('\n columns in table '+tname+' are')
                   print(li)
                   col1 = str(input('enter column name for modification from above list-'))
                   lipo = ['SN']
                   lipo.append(col1)
                   print(tuple(lipo))
                   st0 = 'select SN , %s from books' % (col1)
                   command(st0)
                   fetch()
                   pre_value = str(input('enter corresponding SN for the data to be changed-'))
                   post_value = str(input('enter new value for column %s having SN %s-' % (col1, pre_value)))
                   update(tname, col1, post_value, pre_value)
                   dec = str(input('Do you want to change more data?(Y/N)-'))
                   if dec == 'y' or dec == 'Y':
                      flag='true'            
                   else:
                       flag='false'
           elif dec=='6':
               borrowers()
           elif dec=='7':
               Text_File()
           elif dec == "8":
               Books_file()
           elif dec == "9":
               print("logging out....")
               time.sleep(3)
               print("You have been logged out")
               print("Thank you , Have a nice day")
               break
           else:
             print("Wrong Choice")

elif a == 2:
     user_name = input("\nEnter your username:  ")
     cursor.execute("select name from user where name ='"+user_name+"'")
     row = cursor.fetchall()
     if row is not None:
          passwd = input("\nEntre your password: ")
          cpasswd = input("\nEnter password again: ")
          if passwd == cpasswd:
              cursor.execute("insert into user values('"+user_name+"','"+passwd+"')")
              mycon.commit()
              print("\nSign up sucessfully ")
          else:
           print("Please enter correct password")
else:
        print("not valid")