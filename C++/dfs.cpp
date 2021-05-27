#include<bits/stdc++.h>
using namespace std;
int vis[100001];
vector<int> ar[100001];
void dfs(int node){
    vis[node]=1;
    for(int child: ar[node]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
int main(){
    int n,m,a,b,c=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            c++;
        }
    }
    if(c==1 && m==n-1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}