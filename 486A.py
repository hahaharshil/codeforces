#https://codeforces.com/problemset/problem/486/A
#152818523	Apr/06/2022 11:32UTC+5.5	hahaharshilpp	A - Calculating Function	PyPy 3-64	Accepted	62 ms	0 KB


import math
def evenSum(n):
    s = math.floor(n//2)
    s = s * (s + 1)
    return s
def oddSum(n):
    s = math.ceil(n/2.0)
    return s**2
 
n = int(input())
print(evenSum(n) - oddSum(n))



