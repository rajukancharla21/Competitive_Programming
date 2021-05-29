#include<bits/stdc++.h>
using namespace std;
vector<int> ar[100001];
int vis[100001];
int dis[100001];
int level[100001];
void bfs(int node){
    vis[node]=1;
    dis[node]=0;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int child: ar[cur]){
            if(vis[child]==0){
                q.push(child);
                vis[child]=1;
                dis[child]=dis[cur]+1;
                level[dis[child]]++;
            }
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q,src,d,n,m,a,b;
    cin>>n>>m;
    for(int i=0;i<=m;i++){
        cin>>a>>b;
        ar[a].push_back(b),ar[b].push_back(a);
    }
    cin>>q;
    while(q--){
        cin>>src>>d;
        for(int i=0;i<=n;i++) level[i]=0,vis[i]=0;
        bfs(src);
        cout<<level[d]<<endl;
    }
    
}