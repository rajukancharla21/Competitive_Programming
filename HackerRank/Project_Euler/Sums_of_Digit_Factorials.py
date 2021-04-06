from math import factorial as f
def sumc(n):
    r=0
    while n!=0:
        r+=n%10
        n=n//10
    return r
for _ in range(int(input())):
    n,m=map(int,input().split())
    if(n%m==0):
        n=1
    else:
        n=n%m
    found=0
    result=0
    for i in range(1,n+1):
        j=1
        while True:
            if found==n:
                break
            #print("Current i={} j={}".format(i,j))
            if j<10:
                if i==sumc(f(j)):
                    result+=sumc(j)
                    j+=1
                    found+=1
                    break
            else:
                li=[]
                temp=j
                while temp!=0:
                    li.append((f(temp%10))%m)
                    temp=temp//10
                #print("Current i={} j={} sum={}".format(i,j,sum(li)))
                if i==(sumc(sum(li)%m)%m):
                    result+=sumc(j)
                    j+=1
                    found+=1
                    break
            j+=1
    print(result)
                
            
