#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int size, int index, vector<int> &ans){
  // base case
  if(index >= size) return;

  // processing case
  if(arr[index]%2 == 0){
    ans.push_back(arr[index]);

  }

  // recursive Call
  solve(arr, size, index + 1, ans);
}

int main()
{
  int arr[] = {1,2,3,4,5,6,0,8};
  int size = 8;
  int index = 0;
  vector<int> ans;
  solve(arr,size, index, ans);
  
  // print
  // sort(ans);
  // for(int num : ans){
  //   cout<<num<<" ";
  // }

  for (int i = 0; i < ans.size(); i++)
  {
    cout<<ans[i]<<" ";
  }
  
    return 0;
}