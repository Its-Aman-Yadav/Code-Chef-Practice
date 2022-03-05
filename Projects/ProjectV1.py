import smtplib
import sys
import speech_recognition as sr
import pyttsx3 as ts
import pyaudio as pa
import pywhatkit
import datetime
import wikipedia
import webbrowser
import random
import os
from bs4 import BeautifulSoup
import requests


listner = sr.Recognizer()
engine = ts.init()
# voices = engine.getProperty('voices')         For Female Voice
# engine.setProperty('voice',voices[1].id)


def speak(input):
    # speak function
    engine.say(input)
    engine.runAndWait()


def wishMe():
    # speak funtion
    hour = int(datetime.datetime.now().hour)
    if hour >= 0 and hour < 12:
        speak("  Good Morning")
        speak(
              'Hello, I am Reettuuu your virtual assistant, please say the code word to get started')
    elif hour >= 12 and hour < 18:
        speak("  Good Afternoon")
        speak(
              'Hello, I am Reettuuu your virtual assistant, please say the code word to get started')
    else:
        speak("  Good Evening")
        speak(
              'Hello, I am Reettuuu your virtual assistant, please say the code word to get started')


def takeCommand():
    # audio input function

    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening.....")
        r.pause_threshold = 1   #To adjust for one second break
        audio = r.listen(source)

    try:
        print("Processing....")
        query = r.recognize_google(audio, language='eng-in')
        print('You said', query)

    except Exception as e:
        print("Say again please....")
        return 'None'
    return query


def SendEmail(to, content):  # Did not work properly
    server = smtplib.SMTP('smtp.gmail.com', 587)
    server.echo()
    server.starttls()
    server.login('ay2284734@gmail.com', '9971903451')
    server.sendmail('uk9034@gmail.com', to, content)
    server.close()


Positve = ['my pleasure sir', 'you are welcome sir', 'that is why i am here sir', 'mention not sir']
Negative = ['sorry sir', 'my apology sir', 'my bad sir']
Formality = ['how are you', 'what about you', 'how is you', 'whatsup']
Wrong = ['stupid', 'idiot', 'useless', 'fuck', 'shit']
Nice = ['thank you', 'nice', 'good', 'awesome', 'sick']
TimePass = ['i am feeling bore' , 'getting bore']

# main
if __name__ == "__main__":
    wishMe()
    query = takeCommand().lower()
    if 'yoyo' in query:
        speak('  Welcome Aman sir, all systems are online')
        speak('  What you want to do sir')

        while True:
            query = takeCommand().lower()

            if 'youtube' in query:
                if 'play' in query:
                    query = query.replace('on youtube', " ")
                    pywhatkit.playonyt(query)

            

            elif 'open' in query:
                if 'google' in query:
                    webbrowser.open('www.google.com')
                elif 'mywebite' in query:
                    webbrowser.open('www.itsamanyadav1.blogspot.com')
                elif 'youtube' in query:
                    webbrowser.open("www.youtube.com")

            elif 'the time' in query:
                time = datetime.datetime.now().strftime("%H:%M:%S")
                speak("  The time is")
                speak(time)

            elif 'bye' in query:
                speak("  Goodbye sir, have a nice and Ritu loves you")
                exit()

            elif query in Formality:
                speak("  If you are good then i am also good sir, thanks for asking")

            elif query in Nice:
                a = random.choice(Positve)
                speak(a)

            elif query in Wrong:
                b = random.choice(Negative)
                speak(b)

            elif query in TimePass:
                speak('')

            elif 'nothing' in query:
                speak('Then you should start study or go outside sir')
                if 'shut up' or 'quite' in query:
                 speak('Ok sir')

            # elif 'can you do' or 'can do' in query:
                # speak('I can do lots of thing sir, like playing music, opening an app, tells you about weather, tells you the time, shutdown the system')
                # speak("if you don't need me i will be shut down sir")

            elif 'weather' or 'tempreture' in query:
                 speak("Which city sir")
                 listen = takeCommand().lower()
                 city = listen
                 headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.3'}
                 city = city.replace(" ", "+")
                 a=requests.get(f'https://www.google.com/search?q={city}&oq={city}&aqs=chrome.0.35i39l2j0l4j46j69i60.6128j1j7&sourceid=chrome&ie=UTF-8',headers=headers)
                 print("Searching...\n")
                 soup = BeautifulSoup(a.text, 'html.parser')
                 location = soup.select('#wob_loc')[0].getText().strip()
                 time = soup.select('#wob_dts')[0].getText().strip()
                 info = soup.select('#wob_dc')[0].getText().strip()
                 weather = soup.select('#wob_tm')[0].getText().strip()
                 print(weather)
                 speak(weather)

            elif 'shutdown' in query:
                speak("Do you want to shut down system or terminate the program")
                query = takeCommand()
                if 'system' in query:
                    speak('Shuting down')
                    os.system("shutdown /s /t 1")
                else:
                    speak("Program terminating, goodbye sir")
                    exit()
    else:
        speak('Sorry, Wrong code word')


            #   elif 'email to aman' in query:
            #       try:
            #           speak("What you want to say?")
            #           content = takeCommand()
            #           to = "ay2284734@gmail.com"
            #           sendEmail(to,content)
            #           speak("Email sent sucessfully")
            #       except Exception as e:
            #           print(e)
            #           speak("Sorry sir, i have some error")
            # elif 'tell me about' or 'who is' or 'what are' or 'what' or 'when' or 'how to' in query:
            #         query = query.replace('tell me about', '')
            #         results = wikipedia.summary(query, sentences=2)
            #         speak('According to wikipedia')
            #         print(results)
            #         speak(results)