import math 
n=int(input())
s=input()
t=s.count("A")
if t*2==n:
    print("Friendship")
elif t<math.ceil(n/2):
    print("Danik")
else:
    print("Anton")