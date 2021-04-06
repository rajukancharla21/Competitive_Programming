N=int
I=input
T=[]
for h in[0]*N(I()):
 a,b=I().split()
 T+=N(a)<<1,N(b)<<1|1
c=h
for t in sorted(T):
 c+=1-t%2*2
 if c>h:h=c
print(h)
'''
ar=[]
for _ in range(int(input())):
    a,b=map(int,input().split())
    t1=(a,0)
    t2=(b,1)
    ar.extend([t1,t2])
ar.sort()
entered=0
ans=0
for i in ar:
    if i[1]==0:
        entered+=1
        ans=max(ans,entered)
    else:
        entered-=1
    
print(ans)
'''    
