def gift(n,e):
    s=0
    r=[1]*n
    l=[1]*n
    for i in range(n):
        if(e[i]>e[i-1]):
            l[i]=l[i-1]+1
    for i in range(n-2,-1,-1):
        if(e[i]>e[i+1]):
            r[i]=r[i+1]+1
    for i in range(n):
        s+=max(l[i],r[i])
    return s
    

for _ in range(int(input())):
    n=int(input())
    e=list(map(int,input().split()))
    print(gift(n,e))
