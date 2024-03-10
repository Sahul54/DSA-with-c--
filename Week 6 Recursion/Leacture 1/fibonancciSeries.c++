#include<bits/stdc++.h>
using namespace std;

int fibonacciSeries(int n){
  // base case
  if(n == 0) return 0;

  if(n == 1) return 1;

  // rearisive case
  int ans = fibonacciSeries(n-1) + fibonacciSeries(n-2);
  return ans;
}
int main()
{   
  cout<<endl<<fibonacciSeries(5);
    return 0;
}