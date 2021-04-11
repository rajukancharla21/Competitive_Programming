#include<iostream>
#include<math.h>
using namespace std;
int power(int n,int m){
    //Time Complexity Logn base 2
    if(m==0){
        return 1;
    }
    if(m%2==0){
        int half=power(n,m/2);
        return half*half;
    }
    else{
        int half=power(n,floor(m/2));
        return half*half*n;
    }
}
int main(){
    cout<<power(2,4);
}