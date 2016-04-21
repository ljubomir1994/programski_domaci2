'''
Created on Apr 21, 2016

@author: Nemanja
'''
import math
import random
from numpy.random.mtrand import randint
def nextPoisson(lambda1):
    elambda = math.exp(-1*lambda1)
    product = 1
    count  = 0
    
    while(product >= elambda):
        product *= random.random()
        result = count
        count += 1
    return result
for x in range(1, 20):
    print nextPoisson(x)
    

def podskupovi(d, n, lambda1):
    list = []
    for i in range(d-n):
        random = nextPoisson(lambda1)
        print "\n\nPoasonov: ", random
        for j in range(random):
            list.insert(j, randint(1,100))
        for item in list:
            print " ", item,
        print '\n'