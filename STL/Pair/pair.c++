#include<bits/stdc++.h>
using namespace std;

int main()
{

  // pair<string, int> p;
  // // p = {"rohit", 30};

  // p = make_pair("rohit", 50);

  // p.first = "Rohit";
  // p.second = 50;
  // cout<<p.first<<" "<<p.second;

  // Pair of Pair
  pair<string, pair<int, int>>p;
  // p = {"rohit", {12, 45}};

  // p.first = "Rohit";
  // p.second.first = 34;
  // p.second.second = 34;

  p = make_pair("Rohit", make_pair(2,4));

  cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;




  //   pair<int, int> p;
  //   // cin>>p.first;
  //   // cout<<p.first;
  //   p ={1,2};

  //  pair<int, int> &p1 = p; // &call bty value
  //  p1.first=5;

  //   cout<<p.first<<" "<<p.second<<endl;

  //   cout << "Piar in array -------- "<< endl;

  //   pair<int, int> arr[3];
  //   arr[0] = {1,2};
  //   arr[1] = {2,3};
  //   arr[2] = {3,4};
  //   int n = 3;

  //   for (int i = 0; i < n; i++)
  //   {
  //     cout<<arr[i].first << " " << arr[i].second<<endl;
  //   }
    

 
    return 0;
}