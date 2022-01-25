#139675211	Dec/18/2021 00:28UTC+5.5	hahaharshilpp	A - Anton and Danik	Python 3	Accepted	62 ms	100 KB
#https://codeforces.com/contest/734/problem/A

n = int(input())
main = input()
i = 0

AntonScore = 0
DanikScore = 0

for i in range(n):
    if main[i] == "A":
        AntonScore += 1
    else:
        DanikScore += 1

if AntonScore < DanikScore:
    print("Danik")
elif AntonScore == DanikScore:
    print("Friendship")
else:
    print("Anton")
