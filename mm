# -*- coding: utf-8 -*-
from __future__ import print_function # must be first in file
import random
import time

        
        questions = 0
a = random.randint(1,12)
b = random.randint(1,12)


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

for questions in range(10):
    Qlist = [add, subtract, multiply]
    random.choice(Qlist)(random.randint(1,12), random.randint(1,12))
    questions += 1



if questions == 10:
    print ("End of quiz")
