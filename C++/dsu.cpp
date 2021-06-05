#include<bits/stdc++.h>
using namespace std;

int parent[100001];

int find_set(int v){
    if(parent[v]==v){
        return v;
    }
    return parent[v]=find_set(parent[v]);
}
void union_sets(int a,int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        cout<<"Different sets..\n";
        parent[b]=a;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) parent[i]=i;
    while(n--){
        int a,b;
        cin>>a>>b;
        union_sets(a,b);
    }

}