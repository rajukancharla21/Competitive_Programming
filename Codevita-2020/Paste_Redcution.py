ip=input().split()
key=input()
n=''
for i in ip:
    for j in i:
        if j in key:
            n+=j
l=list(key)
s=[[]]
for i in range(len(l)+1):
    for j in range(i+1,len(l)+1):
        s.append(l[i:j])
print(s)
