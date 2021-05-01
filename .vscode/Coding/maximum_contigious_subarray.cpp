#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int maxSoFar=0,best=0;
    for(int i=0;i<n;i++){
        maxSoFar=max(v[i],v[i]+maxSoFar);
        best=max(best,maxSoFar);
    }
    cout<<best;

}