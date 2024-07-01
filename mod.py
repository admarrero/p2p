#!/usr/bin/env python3

s=0

def mod(sum):

    for i in range(1000):
        if i%3==0:
                sum=sum+i
        elif i%5==0:
                sum=sum+i
        else:
                sum=sum
    return sum

print(mod(s))
