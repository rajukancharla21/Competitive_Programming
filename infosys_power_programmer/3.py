ans=0
def backtrac(a,b,n,ans):
    if a==b:
        return ans
    else:
        mid=len(a)
        backtrac(backtrac(a,b,n-2,ans),b,n,ans)
        ans+=1 
a, b = input(), input()
if sorted(a) != sorted(b):
    print(-1)
if len(set(a)) < len(a):
    print(-1)
print(backtrac(a,b,len(a)),ans)
 
 
