n=int(input())
if n<=2:
    print(0)
else:
    a=[]
    for i in range(n):
        a.append(int(input()))
    b=a.copy()
    b.sort()
    c=[]
    d=[]
    for i in range(n//2):
        c.append(b[i])
        c.append(b[n-i-1])
        d.append(b[n-i-1])
        d.append(b[i])
    r=0
    r2=0
    for i in range(n):
        if a[i]!=c[i]:
            r+=1
        if a[i]!=d[i]:
            r2+=1
    print(min(r//2,r2//2))
