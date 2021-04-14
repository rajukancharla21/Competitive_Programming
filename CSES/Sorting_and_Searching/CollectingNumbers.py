n=int(input())
a=list(map(int,input().split()))
res=1
currentmax=1
for i in a:
    if currentmax>i:
        res+=1
    currentmax=i
print(res)
#Didn't pass 1 testcase
