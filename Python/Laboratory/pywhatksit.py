import pywhatkit
num = input("Number daal jisko bhejna hai....")
msg = input("msg toh daal lodu....")
hour = int(input("Time bta kb bhejna hai....."))
min = int(input("Minute kya tera baap bateyga..."))
print("Theke hai ab jaadu dhek")

pywhatkit.sendwhatmsg(num,msg,hour,min)