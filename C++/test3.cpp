#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long n,k;
	cin>>n>>k;
	long long res=0;
	long long a,b;
	cin>>a>>b;
	n--;
	long long curVi=0;
	for(long long i=0;i<=pow(10,100)+1;i++){
		if(i<=a){
			k+=b;
		}
		if(k>0){
			curVi++;
			k--;
		}
		else{
			while(n>0){
				cin>>a>>b;
				n--;
			}
			break;
		}
		
	}
	cout<<curVi;
	return 0;
}
