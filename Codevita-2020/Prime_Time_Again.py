def sieve(d):
    a=[True]*(d+1)
    s=2
    while(s*s<=d):
        if(a[s]==True):
            for i in range(s*2,d+1,s):
                a[i]=False
        s+=1
    a[0],a[1]=False,False
    return a
d,p=map(int,input().split())
r=d//p#12
primes=sieve(d)
tot=0
for i in range(r+1):
    c=set()
    prev=r+i#12+1
    c.add(i)#1
    c.add(prev)#13
    for j in range(2,p):
        prev+=r#13+12=25
        c.add(prev)#1,13,25
    for i in c:
        if primes[i]==False:
            break
    else:
        tot+=1
    print(c)
print(tot)

