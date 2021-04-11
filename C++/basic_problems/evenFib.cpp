//We need to calcuate fibnoic for even value less than x
#include<iostream>
using namespace std;


void bruteforce(int n){
    int a=0;
    int b=1;
    int c;
    cout<<a<<" ";
    while(n!=0){
        c=a+b;
        if(c%2==0){
            cout<<c<<" ";
        }
        a=b;
        b=c;
        n--;

    }
}
void fibEven(int n){
    int a=0;
    int b=2;
    int c;
    cout<<a<<" "<<b<<" ";
    while(c<=n){
        c=4*b+a;
        if(c%2==0){
            cout<<c<<" ";
        }
        a=b;
        b=c;
    }

}
int main(){

    int x;
    cout<<"Enter a Value: ";
    cin>>x;
    //bruteforce(x);
    fibEven(x);
/* we can use bruteforce to do.. fib(n)=fib(n-1)+fib(n-2) but we can optimise it
    0 1 1 2 3 5 8 13 21 34 55 89 
    by looking at above fib result for first 10 values.. we can say that
    fibEven(n) = 4*fibEven(n-1) + fibEven(n-2)
    fibEven(n-1)-> previous Even Number-1
    fibEven(n-2)-> previous Even Number-2
*/
    return 0;
}