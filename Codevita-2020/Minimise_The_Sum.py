import bisect
  
def insert(list, n): 
    bisect.insort(list, n)  
    return list
n,k=map(int,input().split())
b=list(map(int,input().split()))
a=[]
for i in range(n):
    a=insert(a,b[i])
    
while(k>0):
    t=a[-1]//2
    a=a[:-1]
    a=insert(a,t)
    k-=1
print(sum(a))

