#Write a program in python to display prime numbers from 20 to 50

for i in range (20 , 51):

   for j in range (2,i//2+1):

       if i%j == 0:
          break
   else:
      print(i) 
       
 