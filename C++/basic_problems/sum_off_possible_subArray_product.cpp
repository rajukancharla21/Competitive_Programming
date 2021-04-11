/*
We need to print the sum of possible subarray product
ex: [1,2,3]-> possible sum [1,2] [2,3] [1,3] -> 2+6+3=11
Approach-1
Generate all possible sum and do prod.. but it wont for for array size 10**7
Approach-2
(a+b)**2 = a**2 + b**2 + 2ab
(a+b+c)**2 = a**2 + b**2 + c**2 + 2(ab+bc+ca)

We can simply above formula
ab+bc+ca = ((a+b+c)**2 - (a**2 + b**2 + c**2)) / 2
*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
 int n;
 cin>>n;
 int x;
 int sumofValue=0;
 int squareSum=0;
 for(int i=0;i<n;i++){
     cin>>x;
     sumofValue+=x;
     squareSum+=x*x;
 }
 cout<<((sumofValue*sumofValue)-squareSum)/2;
}