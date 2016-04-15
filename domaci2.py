'''
Created on Apr 15, 2016

@author: Nemanja
'''
import numpy as np
if __name__ == '__main__':
    pass

def poissonRandomNumber(lambda1):
    rand = np.random()
    l = np.exp(-lambda1)
    k = 0
    p = 1
    while(p > l):
        k = k + 1
        u = rand.rand()
        p = p * u;
    return k - 1

def podskupovi(d, n, lambda1):
    r = np.random()
    for i in xrange(d-n):
        random = poissonRandomNumber(lambda1)
        print "\n\nPoasonov: ", random
        for j in xrange(random):
            list.insert(j, r.rand(1, 100))
        for item in xrange(list):
            print "\nSadrzaj: ", item
    
podskupovi.podskupovi(10, 5, 10)
