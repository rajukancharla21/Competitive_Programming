n=int(input())
m=int(input())
x=int(input())
bp=[]
b=[]
c=[]
off=dict()
for i in range(n):
    bp.append(int(input()))
for i in range(m):
    b.append(int(input()))
    c.append(int(input()))
    off[b[-1]]=c[-1]
off = sorted(off.items(),key=lambda x: x[1])
tb=0
bp.sort()
tb2=0
print('#############')
print(off)
print(bp)
for i,j in off:
    if i+j <=x:
        tb+=i
        r1=j
    if i==x:
        tb2=i
        r2=j
print(tb)
print(tb2)
print('#################')
if tb==0 and tb2==0:
    print(sum(bp[:x]))
elif tb2!=0:
    print(sum(bp[:tb2])-sum(bp[:r2]))
else:
    print(sum(bp[:tb])-sum(bp[:r1]))


