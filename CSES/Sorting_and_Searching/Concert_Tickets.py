from bisect import *
readArray=lambda:map(int,input().split())
n,m=readArray()
ti=sorted(readArray())
k = list(range(n+1))
for t in readArray():
    i = bisect(ti, t)
    while k[i] != i:
        k[i], i = k[k[i]], k[i]
    if i:
        print(ti[i-1])
        k[i] -= 1
    else:
        print(-1)

