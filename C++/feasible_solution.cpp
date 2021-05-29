#include<bits/stdc++.h>

using namespace std;
vector<int> ar[1000001];
int vis[1000001];
int cc[1000001];
int current;
void dfs(int node){
    vis[node]=1;
    cc[node]=current;
    for(int child: ar[node]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        string op;
        cin>>n>>k;
        current=0;
        vector<pair<int,int>> edgeList;
        for(int i=1;i<=n;i++) ar[i].clear(),vis[i]=0;
        for(int i=1;i<=k;i++){
            cin>>a>>op>>b;
            if(op == "="){
                ar[a].push_back(b);
                ar[b].push_back(a);
            }
            else{
                edgeList.push_back({a,b});
            }
        }
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                current++;
                dfs(i);
            }
        }
        bool flag=true;
        for(int i=0;i<edgeList.size();i++){
            a=edgeList[i].first;
            b=edgeList[i].second;
            if(cc[a]==cc[b]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}