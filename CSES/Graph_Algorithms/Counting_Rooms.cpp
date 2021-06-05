#include<bits/stdc++.h>
using namespace std;
int n,m;
bool vis[1001][1001];
char grid[1001][1001];
int cc;
bool isValid(int x, int y){
    if(x<1 || x>n || y<1 || y>m){
        return false;
    }
    if(vis[x][y]==true || grid[x][y]=='#'){
        return false;
    }
    return true;
}
int dx[] ={-1, 0, 1, 0};
int dy[] ={0, 1, 0, -1};
void dfs(int x, int y){
    vis[x][y]=true;
    for(int i=0;i<4;i++){
        if(isValid(x+dx[i],y+dy[i])){
            dfs(x+dx[i],y+dy[i]);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(isValid(i,j)){
                cc++;
                dfs(i,j);
            }
        }
    }
    cout<<cc;
}
