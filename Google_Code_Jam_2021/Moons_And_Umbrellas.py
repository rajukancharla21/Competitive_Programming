for t in range(int(input())):
    x,y,ip=input().split()
    x=int(x)
    y=int(y)
    n=len(ip)
    res=0
    if min(x,y)>=0:
        pr='X'
        for i in range(n):
            if ip[i]=="C":
                if pr=="J":
                    res+=y
                pr="C"
            elif ip[i]=="J":
                if pr=="C":
                    res+=x
                pr="J"
        print("Case #{}: {}".format(t+1,res))
    else:
        if(x>y):
            res2=0
            r1=ip.replace("??","CJ")
            r1=r1.replace("?","C")
            r2=ip.replace("??","JC")
            r2=r2.replace("?","J")
            for i in range(n):
                if r1[i:i+2]=="CJ":
                    res+=x
                elif r1[i:i+2]=="JC":
                    res+=y
                if r2[i:i+2]=="CJ":
                    res2+=x
                elif r2[i:i+2]=="JC":
                    res2+=y
            print("Case #{}: {}".format(t+1,min(res,res2)))
