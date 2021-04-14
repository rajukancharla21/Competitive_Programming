a=[]
n=int(input())
for _ in range(n):
    t=list(map(int,input().split()))
    a.append(t)
a=sorted(a,key= lambda x: x[1])
b=[]
watched=1
st=a[0][0]
end=a[0][1]
for i in range(1,n):
    if a[i][0]>=end:
        st=a[i][0]
        end=a[i][1]
        watched+=1
print(watched)

