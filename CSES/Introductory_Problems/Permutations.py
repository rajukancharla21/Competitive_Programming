n=int(input())
if n==2 or n==3:
    print("NO SOLUTION")
else:
    if n % 2==0:
        for i in range(n-1,0,-2):
            print(i,end=' ')
        print(n,end=' ')
        for i in range(2,n,2):
            print(i,end=' ')
    else:
        for i in range(n-1,0,-2):
            print(i,end=' ')
        print(n,end=' ')
        for i in range(n-2,0,-2):
            print(i,end=' ')