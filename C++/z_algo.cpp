#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="aaaaa";
	int n = (int) s.length();
    vector<int> z(n);
    for(int i:z){cout<<i<<" ";}
    cout<<"\n";
    for (int i = 1; i < n; ++i)
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        for(int i:z){cout<<i<<" ";}
    	cout<<"\n";

}
