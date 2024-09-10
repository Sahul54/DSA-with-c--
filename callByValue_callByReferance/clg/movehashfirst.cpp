#include <bits/stdc++.h>
using namespace std;

string moveHashFirst(string &str) {
    stack<char> st;
    queue<char> q;
    
    // Separate hash '#' and other characters
    for (char c : str) {
        if (c == '#') {
            st.push(c);
        } else {
            q.push(c);
        }
    }
    
    // Reconstruct the string with hashes at the beginning
    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
    while (!q.empty()) {
        result += q.front();
        q.pop();
    }
    
    return result;
}

int main() {
    string str = "Move#Hash#To#Front";
    string result = moveHashFirst(str);
    cout << result << endl; // Output the result to verify
    return 0;
}
