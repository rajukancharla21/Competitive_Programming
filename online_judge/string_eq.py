def rr(a,b):
    if a==b or a[::-1]==b or a==b[::-1]:
        return True
    else:
        return False
a=input()
b=input()
while a!=b and a!='' and b!='':
    if rr(a,b)==False:
        if a[0]==b[-1]:
            a=a[1:]
            b=b[:-1]
        elif a[0]==b[0]:
            a=a[1:]
            b=b[1:]
        elif a[-1]==b[-1]:
            a=a[:-1]
            b=b[:-1]
        elif a[-1]==b[0]:
            a=a[:-1]
            b=b[1:]
        else:
            if len(a)>len(b):
                a=a[1:]
            else:
                b=b[1:]
print(min(len(a),len(b)))
