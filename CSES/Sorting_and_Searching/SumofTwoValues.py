n,reqsum=map(int,input().split())
a=list(map(int,input().split()))
arr=[]
for i in range(1,n+1):
    arr.append([i,a[i-1]])
arr=sorted(arr,key=lambda x:x[1])
#print(arr)
i=0
j=n-1
while(i<=j and i!=j):
    #print("{}+{}={}".format(arr[i][1],arr[j][1],arr[i][1]+arr[j][1]))
    if(arr[i][1]+arr[j][1]==reqsum):
        print("{} {}".format(arr[i][0],arr[j][0]))
        break
    elif(arr[i][1]+arr[j][1]<reqsum):
        i+=1
    elif(arr[i][1]+arr[j][1]>reqsum):
        j-=1
else:
    print("IMPOSSIBLE")

    
