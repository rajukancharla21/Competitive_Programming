n=int(input())
a=list(map(int,input().split()))
current_max=a[0]
max_till_now=a[0]
for i in range(1,n):
    current_max=max(a[i],a[i]+current_max)
    max_till_now=max(max_till_now,current_max)
print(max_till_now)
