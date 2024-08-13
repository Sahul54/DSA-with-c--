#include<bits/stdc++.h>
using namespace std;
int main(){
    // Unorder_set: It stored the element is unique
    //              Store in random order
    //  Implement in :- It use hasing technique use
    // TC : O(1) (Search, insert, remove)

    unordered_set<int>un;
    un.insert(10);
    un.insert(20);
    un.insert(20);
    un.insert(230);
    un.insert(40);
    un.insert(20);
    un.insert(30);

    un.erase(30);
    for(auto& it: un){
        cout<<it<<" ";
    }
  return 0;
}