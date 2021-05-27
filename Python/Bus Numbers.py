n=int(input())
a=list(map(int,input().split()))
a.sort()
lt=0
rt=1
d=1
res=[]
while lt!=n:
    if a[lt]==a[rt]-d:
        rt+=1
        d+=1
        continue
    else:
        rt-=1
    if d==1:
        res.append(str(a[lt]))
    elif d==2:
        res.extend([str(a[lt]),str(a[rt])])
    else:
        res.append(str(a[lt])+"-"+str(a[rt]))
    lt=rt+1
    rt=lt+1
    d=1
    print(lt)
print(*res)
