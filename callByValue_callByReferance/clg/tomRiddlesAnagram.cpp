#include<bits/stdc++.h>
using namespace std;
// bool isTomRiddles(string &str1, string &str2){
//    trim(str1);
//    trim(str2);
//     if(str1.length() != str2.length()) return false;

//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());

//     if(str1 == str2) return true;
//     else{
//         return false;
//     }
// }

void isTomRiddles(string &str1, string &str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    string sortStr1;
    for(int i=0; i<str1.length(); i++){
        if(str1 != " "){
            sortStr1.push_back(str1[i]);
        }
    }

    string sortStr2;
    for(int i=0; i<str2.length(); i++){
        if(str2 != " "){
            sortStr2.push_back(str2[i]);
        }
    }
    cout<<sortStr1;
    cout<<sortStr2;

    for(int i=0; i<sortStr1.length(); i++){
        if(sortStr1[i] != sortStr2[i]){
            cout<<"false";
        }
    }
    cout<<"true";
    
}

int main(){
string str1 = "harry potter";
string str2 = "try hero part";

isTomRiddles(str1,str2);
return 0;
}