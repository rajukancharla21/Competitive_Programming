#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins;
    vector<int> dp(x+1,1e9);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        coins.push_back(temp);
    }
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i-coins[j]>=0){
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
            
        }
    }
    if(dp[x]==1e9){
        cout<<-1;
    }
    else{
        cout<<dp[x];
    }
    
}