#include<bits/stdc++.h>
using namespace std;
vector<int> ar[10001];
int vis[10001];
int dis[10001];
void dfs(int node,int d){
    vis[node]=1;
    dis[node]=d;
    for(int child:ar[node]){
        if(!vis[child]){
            dfs(child,dis[node]+1);
        }
    }
}
int main(){
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    dfs(1,0);
    int q,girl_city,ans=-1,min_dist=1e9;
    cin>>q;
    while(q--){
        cin>>girl_city;
        if(dis[girl_city]<min_dist){
            min_dist=dis[girl_city];
            ans=girl_city;
        }
        else{
            if(dis[girl_city]==min_dist && girl_city < min_dist){
                ans=girl_city;
            }
        }
    }
    cout<<ans;
}