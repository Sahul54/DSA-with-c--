#include<bits/stdc++.h>
using namespace std;
int count(int n){

  // base case
  if (n==1)
  {
    return 1;
  }
  // reacisive call
  int ans = n + count(n-1);
}


  // -----------Print counting-----------
  void countingPrint(int n){
    // base case
    if (n == 0)
    {
      return;
    }

    // Processing
    cout<<n<<" ";

    // recarsive call
    countingPrint(n-1);   // 5 4 3 2 1

     // Processing
    // cout<<n<<" ";   //--> stack call ho ga 1 sy chalna start ho jaye ga  ---> 1 2 3 4 5 
    
  }
int main()
{
  // cout<<count(5);
  countingPrint(5);
    return 0;
}