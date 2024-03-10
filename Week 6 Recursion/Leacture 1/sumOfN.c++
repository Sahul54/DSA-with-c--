#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){
  if (n == 0)
  {
    return 0;
  }

  int ans = n + sumOfN(n-1);
  return ans;  
  
}
int main()
{
  cout<<sumOfN(5);
    return 0;
}