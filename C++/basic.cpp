#include<iostream>
using namespace std;
#include<regex>
#include<vector>
// int main(){
//     int x;
//     cout<<"How many Rows??\n";
//     cin>>x;
//     for(int i=0;i<=x;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }
// int main(){
//     int a=1;
//     int b=a++;
//     cout<<b;
// }
// void array(int ar[]){
//     ar[2]=2;
// }
// struct point{
//     int x,y;
// };
// struct dot{
//     int *x,*y;
// };
// int main(){
// regex r ("[a]");
// cout<<regex_match("raju",r);

// vector <int> a;
// a.pushback(1);

// }
int main(){
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    // for (int i:a){
    //     cout<<i<<" ";
    // }
    //vector <int> :: iterator it=a.begin();
    auto it=a.begin();
    cout<<*it;
    while(it!=a.end()){
        cout<<*it;
        it++;
    }
}
