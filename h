# -*- coding: utf-8 -*-
from __future__ import print_function # must be first in file
import random
import math
import time

        
questions = 0
questionss = 0
a = random.randint(1,12)
b = random.randint(1,12)
c = random.randint(1,3)
d = random.randint(1,10)
       

def add(a,b):
    addQ =  int(input(str(a) + "+" + str(b) + "="))
    result = int(int(a) + int(b))
    if addQ != result:
        print ("Incorrect! The answer is", result)

    else:
        print("Correct")

def multiply(a,b):
    score = 0
    multQ =  int(input(str(a) + "X" + str(b) + "="))
    results = int(int(a) * int(b))
    if multQ != results:
        print ("Incorrect! The answer is", results)

    else:
        print("Correct")
        


def subtract(a,b):
    subQ =  int(input(str(a) + "-" + str(b) + "="))
    resultss = int(int(a) - int(b))
    if subQ != resultss:
        print ("Incorrect! The answer is", resultss)

        
    else:
        print("Correct")

for questions1 in range(10):
    Qlist = [add, subtract, multiply]
    random.choice(Qlist)(random.randint(1,12), random.randint(1,12))
    questions += 1


if questions == 10:
    print ("\nHere, some more challenging question for ya!!\n")

def square(a,c):
    squQ = int (raw_input(str(a) + "**" + str(c) + "="))
    resultsss = int (int(a) ** int(c))
    if squQ != resultsss:
         print ('Incorrect! The answer is ', resultsss)
        
    else:
         print ('Correct')
         
def squares(a,c):
    squsQ = int (raw_input(str(a) + "**" + str(c) + "+" + str(215) + "="))
    resultssss = int (int(a) ** int(c) + 215)
    if squsQ != resultssss:
        print ('Incorrect! The answer is ', resultssss)
        
    else:
        print ('Correct')


    
for questions2 in range(6):
    Qlists = [square,squares]
    random.choice(Qlists)(random.randint(1,12), random.randint(1,3))
    questionss += 1

if questionss == 6:
    print ('\nha you good boy, try the last Master question!\n')
    one = int(raw_input=('1+1='))
    resultsssss = 2
    if one == resultsssss:
        print('What? This is impossible, you arre the god of this Game!!!')
    else:
        print('Get out of here! Go to find you Algebra teacher and yell my name in the hall!')
    
