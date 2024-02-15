#include<iostream>

using namespace std;

void callByReferance(int &k){ // call by reference
  k= k+1;
  cout<<"k: "<< k;
}

int main(){
 int n= 5;
 callByReferance(n);
//  cout<<"k: "<< n;
}