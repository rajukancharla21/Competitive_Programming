n=int(input())
a=list(map(int,input().split()))
rsum=(n*(n+1))//2
print(rsum-sum(a))