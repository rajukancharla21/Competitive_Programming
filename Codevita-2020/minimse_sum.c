#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,k; cin>>n>>k;
long long a[n];
priority_queue<long long>pq;
for(int i=0;i<n;i++)
{
cin>>a[i];
pq.push(a[i]);
}
while(k--)
{
long long t=(pq.top())/2;
pq.pop();
pq.push(t);
}
long long sm=0;
while(!pq.empty())
{
sm+=pq.top();
pq.pop();
}

cout<<sm;
}
