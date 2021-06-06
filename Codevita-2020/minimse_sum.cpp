#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,k; cin>>n>>k;
long long a[n];
priority_queue<long long>queue;
for(int i=0;i<n;i++)
{
cin>>a[i];
queue.push(a[i]);
}
while(k--)
{
long long t=(queue.top())/2;
queue.pop();
queue.push(t);
}
long long tot=0;
while(!queue.empty())
{
tot+=queue.top();
queue.pop();
}

cout<<tot;
}
