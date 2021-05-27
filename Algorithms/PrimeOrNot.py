def trail(n):
    #Check Normally..
    for i in range(2,n//2+1):
        if n%i==0:
            print("{} is Not prime".format(n))
            break
    else:
        print("{} is prime".format(n))

def fermat_therom(p):
    #Choose random value betweem 2<=a<=p-2.. then a**(p-1) mod p = 1 (Accuracy 99.99%)
    # There might be some cases where a can be wrongly choose.. so we can add
    # gcd(a,p)==1 if we want to get result more accuratley..
    import random
    import math
    if p<4:
        return p==2 or p==3
    a=random.randint(2,p-2)
    if (((a**(p-1)) % p) == 1) and math.gcd(a,p)==1:
        return True
    else:
        return False
    
for _ in range(int(input())):
    if fermat_therom(int(input())):
        print("YES")
    else:
        print("NO")
