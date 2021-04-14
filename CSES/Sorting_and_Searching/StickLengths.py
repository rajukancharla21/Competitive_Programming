n=int(input())
a=list(map(int,input().split()))
a=sorted(a)
r=a[n//2]
res=0
for i in a:
    res+=abs(r-i)
print(res)