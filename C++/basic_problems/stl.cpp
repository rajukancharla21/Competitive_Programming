/*
Q1- Given an N size 0 array and Q quries and each query gives L & R 
increase  by 1 between L & R range
Ex: [0 0 0 0 0] N=5 Q=3
2 3 -> [ 0 1 1 0 0]
1 2 -> [ 1 2 1 0 0]
3 4 -> [ 1 2 2 0 0]
Output [1 2 2 0 0]
Limits
n>=10**7
q>=10**5
--------------------
PBDS ( Policy Based Data Structres)
-> Special data structure which answers the below things
= find_by_order(k)-> return the points to the kth highest element
= order_of_key(x)-> return how many elements are strictly lesser than x
                    return count
both functions work in Log(n) time
Note: PBDS will store only unique elements
It is similar like set but pbds provides 2 above function which set doesn't provide
//for pbds we need to import below header file
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int ,null_type,less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void q1(){
    
    int n,l,r,q;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> v(n+1,0);
    cout<<"Etner No.of Quries: ";
    cin>>q;
    for(int i=0;i<q;i++){
        cout<<"Enter Query-"<<i+1<<" ";
        cin>>l>>r;
        v[l]++;
        v[r+1]--;
    }
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }


}
int main(){
// q1();
pbds arr;

for(int i=1;i<=10;i++){
    arr.insert(i);
}
cout<<*arr.find_by_order(2)<<endl;
cout<<*arr.find_by_order(5)<<endl;
cout<<*arr.find_by_order(10)<<endl;
cout<<*arr.find_by_order(20)<<endl;
cout<<*arr.find_by_order(30)<<endl;
cout<<arr.order_of_key(5);
}