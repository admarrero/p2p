#!/usr/bin/env python3


print("número de interaciones: ")
n=int(input())

sum=0
w=1.0/n

for i in range(n):
    x=w*(i-0.5)
    sum+=4.0/(1.0+(x*x))


pi_approx=sum*w

print("la aproximación es: ",pi_approx)


