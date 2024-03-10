#include<bits/stdc++.h>
using namespace std;

int twoPowerOf(int n){
  // base case
  if(n==0)
  return 1;

  int ans = 2 * twoPowerOf(n-1); 
  return ans;
}
int main()
{
  cout<<twoPowerOf(3);
    return 0;
}