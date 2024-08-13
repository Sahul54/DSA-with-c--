#include<bits/stdc++.h>
using namespace std;
int main(){
    // list<int> l = {1,23,4,5,6,7};
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    // cout<<l.front()<<endl;
    // cout<<l.back()<<endl;
    // l.pop_back();
    // l.pop_front();
    // cout<<l.front()<<endl;
    // cout<<l.back()<<endl;

    for(list<int> :: iterator it = l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }

    // for(auto i: l){
    //     cout<<i<<" ";
    // }

    cout<<endl;
    for(auto it = l.rbegin(); it != l.rend(); it++){
        cout<<*it<<" ";
    }

  return 0;
}