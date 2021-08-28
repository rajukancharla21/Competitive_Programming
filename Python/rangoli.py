n=int(input())
a='abcdefghijklmnopqrstuvwxyz'
pad=n+n-1+n+1
res=[]
for i in range(n):
    p1=a[i:n]
    p2=a[i+1:n][::-1]
    a1='-'.join(map(str,list(p1)))
    a2='-'.join(map(str,list(p2)))
    print(a1,a2)
    if a2=='':
        req=a1
    else:
        req=a2+'-'+a1
    res.append(req.center(pad,'-'))
res=res[1:][::-1]+res[:]
print(*res,sep='\n')
