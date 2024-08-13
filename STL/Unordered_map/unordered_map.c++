#include<bits/stdc++.h>
using namespace std;
int main(){
    // unique key are present, duplicate key is not allowed
    // not neccerary to be sorted way
    // Implement :- Hashing
    // Inser, Serach, delete -> TC : O(1)

    // unordered_map<int, int>mp;
    // mp.insert(make_pair(20, 30));
    // mp.insert(make_pair(30, 40));
    // mp.insert(make_pair(50, 50));
    // mp.insert(make_pair(40, 60));
    // mp.insert(make_pair(20, 70)); // ye insert nhi ho ga
    // mp[20] = 100; // update kar sakte hai
    
    // for(auto it = mp.begin(); it != mp.end(); it++ ){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // cout<<"------"<<endl;
    // // cout<<mp[20];
    // if(mp.count(20))
    // cout<<mp[20];  // check element is present or not

    // mp.erase(20);
    // for(auto it = mp.begin(); it != mp.end(); it++ ){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // ---Unordered_multimap---
    unordered_multimap<int, int>mp;
    mp.insert(make_pair(20, 30));
    mp.insert(make_pair(30, 40));
    mp.insert(make_pair(50, 50));
    mp.insert(make_pair(40, 60));
    mp.insert(make_pair(20, 70)); // ye insert nhi ho ga
    // mp[20] = 100; // update nhi kr sakte hai kyu ye confused ho jayega kon ka wala mai update krna hai
    
    for(auto it = mp.begin(); it != mp.end(); it++ ){
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<"------"<<endl;
    // // cout<<mp[20];
    // if(mp.count(20))
    // cout<<mp[20];  // check element is present or not

    // mp.erase(20);
    // for(auto it = mp.begin(); it != mp.end(); it++ ){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
  return 0;
}