#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int res=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			res+=(100*i)+j;
		}
	}
	cout<<res;
	return 0;
}
