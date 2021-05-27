n=int(input())
arr = []
for i in range(n):
    arr.append(int(input()))
k=None
c=0
temp=[]
for i in range(n):
    temp.append(abs(arr[0]-arr[i]))
k=max(temp)
if k<2:
    k=2
for i in range(n):
    c+=abs(k-arr[i])
    k+=1
print(c)

