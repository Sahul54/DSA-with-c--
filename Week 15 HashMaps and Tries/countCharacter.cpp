#include<bits/stdc++.h>
using namespace std;

void countCharacter(unordered_map<char, int> &mp, string str){
    for(int i =0; i<str.length(); i++){
        char ch = str[i];
        mp[ch]++;
    }
}
int main(){
    string str = "loverbabbar";
    unordered_map<char,int>mp;

    countCharacter(mp, str);

    for(auto i : mp){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
return 0;
}