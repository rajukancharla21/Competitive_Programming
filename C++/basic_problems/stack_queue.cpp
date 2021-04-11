/*
Q1- Given a string of charcters like (){}[] check whether string is valid or not
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
int main(){
    //q1("{[]()}");
}