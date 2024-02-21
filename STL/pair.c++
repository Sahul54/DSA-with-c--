#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p;
    // cin>>p.first;
    // cout<<p.first;
    p ={1,2};

   pair<int, int> &p1 = p; // &call bty value
   p1.first=5;

    cout<<p.first<<" "<<p.second<<endl;

    cout << "Piar in array -------- "<< endl;

    pair<int, int> arr[3];
    arr[0] = {1,2};
    arr[1] = {2,3};
    arr[2] = {3,4};
    int n = 3;

    for (int i = 0; i < n; i++)
    {
      cout<<arr[i].first << " " << arr[i].second<<endl;
    }
    

 
    return 0;
}