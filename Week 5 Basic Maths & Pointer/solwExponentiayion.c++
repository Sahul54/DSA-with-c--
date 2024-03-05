#include<bits/stdc++.h>
using namespace std;

int solwExponentiayion(int a , int b){
  int ans = 1;
  for(int i =0; i<b; i++){
    ans = ans *a;
  }
  return ans;
}// O(b)

int fastExponentiayion(int a , int b){
  int ans = 1;
  while(b > 0){
    //odd
    if(b &1){
    ans = ans *a;
  }
  a = a*a;
  b>>=1; //b = b/2
}
  return ans;
}// O(b)


int main()
{   
    cout<< solwExponentiayion(2,3) <<endl;
    cout<<fastExponentiayion(2,5);
    return 0;
}