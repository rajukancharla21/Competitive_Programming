for t in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort()
    p,q=0,0
    res=[]
    if a[0]!=1:
        p=a[0]-1
    for i in range(1,n):
        res.append(a[i]-a[i-1]-1)
    if a[-1]!=k:
        q=k-a[-1]
    res1=max(p,q)
    add1=0
    for i in range(0,len(res)):
        add1=max(add1,(res[i]+1)//2)
    res1+=add1
    res2=res1
    for i in range(0,len(res)):
        add1=max(res2,res[i])
    print("Case #{}: {}".format(t+1,res2/k))

