n=int(input())
a=list(map(int,input().split()))
a=sorted(a)
res=1
for i in range(n):
    if a[i]<=res:
        res+=a[i]
print(res)