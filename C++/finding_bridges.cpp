#include<bits/stdc++.h>
using namespace std;
vector<int> ar[1000001];
int vis[1000001],low[1000001],high[1000001],timer;
void dfs(int node, int par){
    vis[node]=1;
    low[node]=high[node]=timer++;
    for(int child: ar[node]){
        if(child==par) continue;
        if(vis[child]){
            //back-edge
            low[node]=min(low[node],high[child]);
        }
        else{
            dfs(child,node);
            if(low[child] > high[node]){
                //forward-edge
                cout<<child<<"->"<<node<<" It is a bridge";
            }
            low[node]=min(low[node],low[child]);
        }
    }
}
int main(){
    int n,m,a,b;
    cin>>n>>m;
    while(m--){
        cin>>a>>b;
        ar[a].push_back(b),ar[b].push_back(a);
    }
    dfs(1,-1);
}