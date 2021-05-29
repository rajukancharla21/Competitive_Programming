#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int dis[10001];
void bfs(int node){
    queue<int> q;
    q.push(node);
    vis[node]=1;
    dis[node]=0;
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int child:ar[cur]){
            if(vis[child]==0){
                q.push(child);
                vis[child]=1;
                dis[child]=dis[cur]+1;
            }
        }
    }
}
int main(){
int q,n,m,a,b;
cin>>q;
while(q--){
    cin>>n>>m;
    //for other queries the graph data of 
    //prev data should be cleard
    for(int i=1;i<=n;i++){
        vis[i]=0;
        ar[i].clear();
    }
    while(m--){
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);  
    }
    bfs(1);
    cout<<dis[n]<<endl;
}
}