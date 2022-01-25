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



