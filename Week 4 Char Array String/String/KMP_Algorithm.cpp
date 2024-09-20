// Longest Prefix and Suffix
#include<bits/stdc++.h>
using namespace std;

int lps(string str) {
        // Your code goes here
        vector<int> lps(str.size(), 0);
        int pre = 0, suf = 1;
        
        while(suf < str.size()){
            // Match
            if(str[pre] == str[suf]){
                lps[suf] = pre+1;
                pre++;
                suf++;
            }
            // Not Mach
            else{
                // agr match nhi kiya or pre bhi 0th index mai hi hai
                if(pre == 0){
                    lps[suf] = 0;
                    suf++;
                }
                else{
                    pre = lps[pre-1];
                }
            }
        }
        return lps[str.size() - 1];
 }

int main(){
string str = "abcab";
cout<<"Longest Prefix and Suffix: "<<lps(str);

return 0;
}