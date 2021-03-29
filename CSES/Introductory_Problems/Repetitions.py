best=0
a=input()
n=len(a)
c=0
for i in range(0,n-1):
    if(a[i]==a[i+1]):
        c+=1
    else:
        c=0
    if best < c:
        best=c
print(best+1)