n,s=map(int,input().split())
a=list(map(int,input().split()))
light=[False]*(n+1)
prev=None
for i in a:
    if prev==None:
        prev=max(i,n-i)
    else:
        prev=max(i,prev)
    print(max())


        
