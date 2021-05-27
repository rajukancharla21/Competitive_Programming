import sys
n,x=map(int,sys.readlines().split())
coins=list(map(int,sys.readlines().split()))
dp=[int(1e9)]*(x+1)
dp[0]=0
for i in range(x+1):
    for j in coins:
        if i-j >=0:
            dp[i]=min(dp[i],dp[i-j]+1)
if dp[x]==int(1e9):
    print(-1)
else:
    print(dp[x])
