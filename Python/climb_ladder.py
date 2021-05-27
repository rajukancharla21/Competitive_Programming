n=int(input())
rank=list(map(int,input().split()))
m=int(input())
player=list(map(int,input().split()))
st=[rank[0]]
top=1
for i in range(1,n):
    if st[-1]!=rank[i]:
        st.append(rank[i])
        top+=1
for i in player:
    while st!=[] and i>=st[-1]:
        st.pop()
        top-=1
    print(top+1)

