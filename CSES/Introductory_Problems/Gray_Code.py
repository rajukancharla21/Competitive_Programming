def graycode(n):
    if n<=0:
        return ["0"]
    if n==1:
        return ["0","1"]
    otherNumbers=graycode(n-1)
    mainAns=[]
    totalLen=len(otherNumbers)
    for i in range(totalLen):
        temp=otherNumbers[i]
        mainAns.append("0"+temp)
    for i in range(totalLen-1,-1,-1):
        temp=otherNumbers[i]
        mainAns.append("1"+temp)
    return mainAns
n=int(input())
print(*graycode(n),sep="\n")
