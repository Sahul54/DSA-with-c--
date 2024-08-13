#include<bits/stdc++.h>
using namespace std;

// Duplicate Element can be Stroted
// It will be sotred in shorted order
int main(){
    multiset<int>mt;
    mt.insert(10);
    mt.insert(20);
    mt.insert(30);
    mt.insert(10);

    // erase
    mt.erase(10);  // dono erase ho jate hai

    for(auto it = mt.begin(); it!=mt.end(); it++){
        cout<<*it<<" ";
    }
  return 0;
}