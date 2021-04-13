/*
Q1- Given a string of charcters like (){}[] check whether string is valid or not
Q2- Print just greater next value of each element
Ex:
IP: 4 5 2 25
OP: 5 25 25 -1
Q3- Print first Non-repeating chracter
Ex: 
IP: abaccc
OP: b

*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool q1(string s){
    stack <char> st;
    for(int i=0;i<s.length();i++){
        //cout<<"current char "<<s[i]<<endl;
        if(s[i]=='{' || s[i]=='(' || s[i]=='['){
            st.push(s.at(i));
        }
        else{
            if(st.empty()){
                cout<<"Invalid";
                return false;
            }
            char curChar=st.top();
            //cout<<"stack Top "<<curChar<<endl;
            if(s[i]==')' && curChar!='('){cout<<"Invalid";return false;}
            else if(s[i]=='}' && curChar!='{'){cout<<"Invalid";return false;}
            else if(s[i]==']' && curChar!='['){cout<<"Invalid";return false;}
            else{
                st.pop();
                //cout<<"Current stack Top "<<st.top()<<endl;
            }
        }
    }
    if(st.empty()){cout<<"Valid";}
    else{cout<<"Invalid";}
}
void q2(vector<int> v, int n){
    stack <int> st;
    vector<int> res;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=v[i]){
            st.pop();
        }
        if(st.empty()){
            res.push_back(-1);
        }
        else{
            res.push_back(st.top());
        }
        st.push(v[i]);
        //cout<<"Current Top"<<st.top()<<endl;
    }
    for(int i=n-1;i>=0;i--){
        cout<<res[i]<<" ";
    }

}
void q3(string ip){
    queue<char> q;
    int ar[26]={0};
    for(int i=0;i<ip.length();i++){
        if(ar[ip[i]-97]==0){
            q.push(ip[i]);
            ar[ip[i]-97]+=1;
        }
        else if(ar[ip[i]-97]==1){
            q.pop();
            ar[ip[i]-97]+=1;
        }
        else{
            ar[ip[i]-97]+=1;
        }
    }
    if(q.size()){
        cout<<q.front();
    }else{cout<<-1;}

}
int main(){
    //q1("{[]()}");
    // vector <int> v={4,5,2,25};
    // int n=4;
    // q2(v,n);
    q3("abb");
    // 3rd Result is not good better to use counter in python
}