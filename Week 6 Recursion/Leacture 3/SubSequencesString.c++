// #include<bits/stdc++.h>
// using namespace std;

// void subSequences(string str, string output, int index, vector<string> &ans){
//   // base case
//   if(index >= str.length()) {
//   // ans jo h, vo output string mai build ho chuka hai
//   // print kro
//     // cout<<"->"<<output<<endl;
//      ans.push_back(output);
//     return;
//   }

//   char ch = str[index];

//   // recurive call

//   // 1-----------
//   // // exclude
//   // subSequences(str, output, index+1);

//   // // include
//   // // output string mai ch character ko include kro
//   // output.push_back(ch);
//   // subSequences(str, output, index+1);

// // 2----------

// // include
// output.push_back(ch);
// subSequences(str, output, index+1, ans);

// // enclude
// output.pop_back();
// subSequences(str, output, index+1, ans);

// }

// int main()
// {
//   string str = "abc";
//   string output = " ";
//   int index = 0;
//   vector<string> ans;

//   subSequences(str,output, index, ans);

//   for(string s: ans){
//     cout<<"->"<<s<<endl;
//   }
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {

    int a = 2;
    cout << (a << 1);

}