#include<bits/stdc++.h>
using namespace std;

int fibByLoop( int n){
  int prev1 = 0;
  int prev2 = 1;
  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    ans = prev1 + prev2;
    prev1 = prev2;
    prev2 = ans;
  }
  return ans;
  
}
int main()
{
  cout<<fibByLoop(3);
    return 0;
}