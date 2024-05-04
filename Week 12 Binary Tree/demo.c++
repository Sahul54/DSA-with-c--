#include<bits/stdc++.h>
using namespace std;

void show(int &a, int &b){
    // cout<<"address of function of a : "<<&a<<endl;
    // cout<<"address of function of b : "<<&b<<endl;
    a = 6;
    b =19;
    cout<<a << " "<< b<<endl;
}
int main(){
    int a = 4;
    int b = 5;
    // cout<<"address of a: "<< &a<<endl;
    // cout<<"address of b: "<<&b<<endl;
    cout<<a<<" "<<b<<endl;
    show(a,b);
    
  return 0;
}