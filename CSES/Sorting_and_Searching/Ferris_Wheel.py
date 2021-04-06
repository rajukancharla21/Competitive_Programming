n,x=map(int,input().split())
a=list(map(int,input().split()))
a.sort()
r=0
i=0
j=n-1
while i<=j:
    if a[j]<=x:
        if a[i]+a[j]<=x:
            r+=1
            j-=1
            i+=1
        else:
            r+=1
            j-=1
print(r)
