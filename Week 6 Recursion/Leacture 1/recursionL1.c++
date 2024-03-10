#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
  // base case
  if(n==1 || n ==0){
    return 1;
  }

  // processing

  // recarsive call

  // int ans = n * factorial(n-1); 

  int recursionAns = factorial(n-1);

  // processing

  int finalAns = n * recursionAns;
  return finalAns;
}

int main()
{
    cout<<factorial(5);
    return 0;
}