#include<bits/stdc++.h>
using namespace std;
int main(){
    // map<int, int>mp;
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
    // // // cout<<mp[20];
    // // if(mp.count(20))
    // // cout<<mp[20];  // check element is present or not

    // mp.erase(20);
    // for(auto it = mp.begin(); it != mp.end(); it++ ){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    multimap<int, int>mp;
    mp.insert(make_pair(20, 30));
    mp.insert(make_pair(30, 40));
    mp.insert(make_pair(50, 50));
    mp.insert(make_pair(40, 60));
    mp.insert(make_pair(20, 70)); // ye insert nhi ho ga
    // mp[20] = 100; // multiMap map update nhi kr  sakte hai kyuki kon se kye kare ka pata nhi
    
    for(auto it = mp.begin(); it != mp.end(); it++ ){
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<"------"<<endl;
    // // cout<<mp[20];
    // if(mp.count(20))
    // cout<<mp[20];  // check element is present or not

    mp.erase(20);  // dono key ka data delete kr dega
    for(auto it = mp.begin(); it != mp.end(); it++ ){
        cout<<it->first<<" "<<it->second<<endl;
    }

  return 0;
}