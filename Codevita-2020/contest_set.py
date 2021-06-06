a,b,c=map(int,input().split())
ab,ac,bc=map(int,input().split())
abc=int(input())
r1= c - abs(ac-abc)-abs(bc-abc) - abc
r2=ab-abc
print(r1,r2)
