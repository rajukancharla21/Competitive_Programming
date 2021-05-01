n=int(input())
a=list(map(int,input().split()))
h=set()
cmax=0
l=0
for i in a:
    while i in h:
        # print(i,h,l,a[l])
        h.remove(a[l])
        l+=1
    h.add(i)
    cmax=max(cmax,len(h))
print(cmax)