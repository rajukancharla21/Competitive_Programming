def subsetsum(l,n):
    s_max = sum(l)//2
    s = {0}
    for x in l:
        for y in s.copy():
            if (x+y)<=s_max:
                s.add(x+y)
    return s
 
n = int(input())
l = [int(it) for it in input().split(" ")]
l_sum = sum(l)
 
s = subsetsum(l,n)
diff= l_sum//2-max(s)
 
if l_sum%2==0:
    print(2*diff)
else:
    print(2*diff+1)