#include<iostream>
using namespace std;
class Diagonal{
    private:
    int *arr;
    int n;
    public:
    Diagonal(int n){
        arr=new int[n];

    }
    ~Diagonal(){
        delete []arr;
    }
    void set(int i,int j, int x);
    int get(int i,int j);
    void display();
};
void Diagonal::set(int i,int j, int x){
    if(i==j){
        arr[i-1]=x;
    }
}
int Diagonal::get(int i,int j){
    if(i==j){
        return arr[i-1];
    }
    else{
        return 0;
    }
}
void Diagonal::display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i==j){
                    cout<< get(i,j)<<" ";
                }
                cout<<endl;
        }
    }
}
int main(){
    Diagonal d(4);
    d.set(1,1,1);
    d.set(2,2,2);
    d.set(3,3,3);
    d.set(4,4,4);
    d.display();
    return 0;
}