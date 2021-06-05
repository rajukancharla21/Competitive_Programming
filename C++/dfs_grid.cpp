#include<bits/stdc++.h>
using namespace std;

int n,m;
bool vis[1001][1001];

bool isValid(int x, int y){
    if(x<1 || x> n || y<1 || y>m){
        return false;
    }
    if(vis[x][y]==true){
        return false;
    }
    return true;
}
//Instead of writing 4 cases you can write like this to reduce code
// but array values should be in order..
int dx[] ={-1, 0, 1, 0};
int dy[] ={0, 1, 0, -1};
void dfs(int x,int y){
    vis[x][y]=1;
    cout<<x<<" "<<y<<endl;
    for(int i=0;i<4;i++){
        if(isValid(x+dx[i],y+dy[i])){
            dfs(x+dx[i],y+dy[i]);
        }
    }
    // //Up case
    // if(isValid(x-1,y)){
    //     dfs(x-1,y);
    // }
    // //Right case
    // if(isValid(x,y+1)){
    //     dfs(x,y+1);
    // }
    // //Bottom case
    // if(isValid(x+1,y)){
    //     dfs(x+1,y);
    // }
    // //Left case
    // if(isValid(x,y-1)){
    //     dfs(x,y-1);
    // }

}
int main(){
    cin>>n>>m;
    dfs(1,1);
}