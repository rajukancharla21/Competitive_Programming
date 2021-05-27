import random
import math
def power(a,b):
    res=1
    while b>0:
        if b&1:
            res=res*a
        a=a*a
        b=b>>1
    return res
def power_mod(a,b,m):
    a%=m
    res=1
    while b>0:
        if b&1:
            res=(res*a)%m
        a=(a*a)%m
        b=b>>1
    return res
def check_composite(n,a,d,s):
    # a**d % n == 1 or a**d % n == n-1 
    x=power_mod(a,d,n)
    if x==1 or x==n-1:
        return True
    for i in range(1,s):
        x=(x*x) % n
        if x==n-1:
            return False
    return False 
def fermat_therom(p):
    #Choose random value betweem 2<=a<=p-2.. then a**(p-1) mod p = 1 (Accuracy 99.99%)
    # There might be some cases where a can be wrongly choose.. so we can add
    # gcd(a,p)==1 if we want to get result more accuratley..
    if p<4:
        return p==2 or p==3
    a=random.randint(2,p-2)
    if (power_mod(a,p-1,p) == 1) and math.gcd(a,p)==1:
        return True
    else:
        return False
def miller_rabin(p):
    #Fermat has some case where a choosed wrongly then prime will be resulted wrongly
    # To overcome this strictly a should be a**d % n == 1 or a**d % n == n-1 
    # where 0<=r<=s-1
    if p<2:
        return False
    s=0
    d=p-1
    while d&1 == 0: # if d is even
        d>>=1 #shift bit by 1
        s+=1 #count nuber of times bit has shifted
    for i in [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37]:
        if p==i:
            return True
        if check_composite(p,i,d,s):
            return False
    return True
    
for _ in range(int(input())):
    if miller_rabin(int(input())):
        print("YES")
    else:
        print("NO")