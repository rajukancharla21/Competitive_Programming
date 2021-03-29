ip=input()
look=[0]*26
for i in ip:
    look[ord(i)-65]+=1
mid=''
arrived=True
c=0
for i in range(0,26):
    if look[i]%2!=0:
        if arrived==True and c==0:
            arrived=True
            c+=1
            mid=chr(i+65)*look[i]
        else:
            arrived=False
            print("NO SOLUTION")
            break
    look[i]=str(look[i])+chr(i+65)
start=''
end=''
if arrived:
    for i in look:
        if i[0]=='0':
            continue
        else:
            if int(i[:-1])%2==0:
                start=i[-1]*(int(i[:-1])//2)+start
                end+=i[-1]*(int(i[:-1])//2)
print(start+mid+end)