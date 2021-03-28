def minindex(ar):
    mi=10000
    mv=10000
    for i,j in enumerate(ar):
        if mv>j:
            mv=j
            mi=i
    #print("minIndex {} minVal {}".format(mi,mv))
    return mi
def rvs(ar,n):
    r=[]
    res=0
    for i in range(n):
        j=minindex(ar[i:n])+i
        #print("i={},j={}".format(i,j))
        t=ar[i:j+1]
        res+=abs(j-i+1)
        #print("Temp Array: {}, r={} ".format(t,res))
        ar[i:j+1]=t[::-1]
    return res-1

for t in range(int(input())):
    n=int(input())
    ar=list(map(int,input().split()))
    print("Case #{}: {}".format(t+1,rvs(ar,n)))
