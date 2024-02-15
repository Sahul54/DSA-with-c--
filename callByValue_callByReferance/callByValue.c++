#include<iostream>

using namespace std;

int callByValue(int n){
  n = n+1;
  return n;
}

int main(){

  // int n =5;   // main value
  // int &k = n; // referance value
  // cout<<"k :"<< k;

 
int n;
// cin>>n;
n = callByValue(8);
cout<<"n: "<< n;
}

