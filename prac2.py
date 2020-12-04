#write a program using function to check number is even or odd and number is pallindrome or not

def even_odd(n):      #Check number is even or not 
    if n%2 == 0:
        print(n,"is an even number")
    else :
        print(n,"is a odd number")

def is_pallindrome(n):     # Check for number is pallindrome or not
   if str(n) == str(n)[::-1]:
      print('The given number is palindrome')
   else:
      print('The given number is NOT a palindrome')

#Main program

b=int(input("What you want to check: 1 = even  2 = pallindrome... "))

if b == 1:
    a = int(input("Enter a number:"))
    even_odd(a)
elif b == 2:
    c = int(input("Enter a Number:"))
    is_pallindrome(c)
else :
    print("wrong choice")
