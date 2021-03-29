n=int(input())
if n<3:
    print("NO")
else:
    a=[]
    b=[]
    asum=0
    bsum=0
    for i in range(n,0,-1):
        if asum<bsum:
            asum+=i
            a.append(i)
        else:
            bsum+=i
            b.append(i)
    if asum==bsum:
        print("YES")
        print(len(a))
        print(' '.join(map(str,a)))
        print(len(b))
        print(' '.join(map(str,b)))
    else:
        print("NO")