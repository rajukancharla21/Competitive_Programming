for _ in range(int(input())):
    a,b,c=map(int,input().split())
    deg=120000000000
    r=[(a/deg)*4,(b/deg)*4,(c/deg)*4]
    h,m,s,n=None,None,None,None
    for i in r:
        if i%12==0.0 and h is None:
            h=i12
        elif i%60==0.0 and m is None:
            m=i%60
        elif i%60==0.0 and s is None:
            s=i%60
        else:
            r=i*60*(10**9)
    print(h,m,s,n)