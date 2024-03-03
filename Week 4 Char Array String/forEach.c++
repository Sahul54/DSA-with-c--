#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str = "Dheeraj";

  for(auto ch: str){
    cout<<ch<<" ";
  }

  vector<int> v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(2);
  v.push_back(31);

  for(auto num: v){
    cout<<endl<< num <<" ";
  }
    return 0;
}