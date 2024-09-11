#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "ababc";
    queue<char> q;
    int freq[26] = {0};

    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        freq[ch - 'a']++;
        q.push(ch);

        // Remove characters from the queue that have frequency more than 1
        while(!q.empty() && freq[q.front() - 'a'] > 1){
            q.pop();
        }

        // Print the first non-repeating character or '#' if no such character
        if(q.empty()){
            cout << "#";
        }
        else{
            cout << q.front();
        }
    }

    return 0;
}
