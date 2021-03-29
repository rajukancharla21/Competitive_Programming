def perm(data,i,le):
    global res
    if i==le:
        res.append(''.join(data))
    else:
        for j in range(i,le):
            data[i],data[j]=data[j],data[i]
            perm(data,i+1,le)
            data[i],data[j]=data[j],data[i]
            
res=[]
ip=list(input())
perm(ip,0,len(ip))
perm=list(set(res))
print(len(perm))
for i in sorted(perm):
    print(i)