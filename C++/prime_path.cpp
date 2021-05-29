#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
vector<int> ar[10001];
int dis[10001];
int vis[10001];

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool isValid(int a,int b){
    int c=0;
    while(a>0){
        if( a%10 != b%10 ){
            c++;
        }
        a/=10,b/=10;
    }
    if(c==1) return true;
    else return false;

}
void buildGraph(){
    for(int i=1000;i<=9999;i++){
        if(isPrime(i)){
            prime.push_back(i);
        }
    }
    for(int i=0;i<prime.size();i++){
        for(int j=i+1;j<prime.size();j++){
            int a=prime[i];
            int b=prime[j];
            if(isValid(a,b)){
                ar[a].push_back(b);
                ar[b].push_back(a);
            }
        }
    }
}
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
    int t;
    cin>>t;
    buildGraph();
    while(t--){
        int a,b;
        cin>>a>>b;
        //clear prev data for each test case
        for(int i=1000;i<=9999;i++) dis[i]=-1,vis[i]=0;
        bfs(a);
        if(dis[b]==-1){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<dis[b]<<endl;
        }
        
    }
}