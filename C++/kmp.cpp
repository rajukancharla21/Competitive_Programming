#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p,t;
    cin>>p;
    cin>>t;
    int n=p.size();
    int m=t.size();
    int prefix[n]={0};
    prefix[0]=0;
    int j=1,i=0,cc=0;
    for(int i:prefix){cout<<i<<" ";}
    cout<<"\n";
    while(j<n){
        if(p[i]==p[j]){
            prefix[j]=i+1;
            j++;
            i++;
        }
        else{
            prefix[j]=0;
            j++;
        }
    }
    for(int i:prefix){cout<<i<<" ";}
    cout<<"\n";
    i=0,j=0;
    cout<<i<<" "<<j<<" "<<m<<" "<<n<<endl;
    while(i<m){
        cout<<t[i]<<"->"<<p[i]<<" "<<i<<" "<<j<<endl;
        if(t[i]==p[j]){i++,j++;}
        else{
            if(j!=0){j=prefix[j-1];}
            else{i++;}
        }
        if(j==n){
        	cc++;
        	cout<<i<<" "<<j<<" "<<m<<" "<<n<<endl;
            cout<<i-j<<endl;
            j=prefix[j-1];
//            break;
//            to get all occurences reset j to prefix[j-1]
        }
    }
    cout<<cc;
}
