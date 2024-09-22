// 214. Shortest Palindrome [LeetCode]
// Hard

// You are given a string s. You can convert s to a palindrome by adding characters in front of it.

// Return the shortest palindrome you can find by performing this transformation.

// Example 1:

// Input: s = "aacecaaa"
// Output: "aaacecaaa"

// Example 2:
// Input: s = "abcd"
// Output: "dcbabcd"


#include <bits/stdc++.h>
using namespace std;

string ShortestPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end()); // Reverse `rev`, not `s`

    // Iterate over the length of the string
    for (int i = 0; i < s.length(); i++) {
        // Check if the prefix of s matches the suffix of rev
        if (s.substr(0, s.length() - i) == rev.substr(i)) {
            // If it matches, return the shortest palindrome
            return rev.substr(0, i) + s; // Prefix from rev + original s
        }
    }
    // Return the concatenation of rev and s if no matches are found
    return rev + s;
}


 string shortestPalindrome_memcmp(string s) {
        string rev = s;
        // reverse
        reverse(rev.begin(), rev.end());

        for(int i=0; i<s.length(); i++){
            // check kitna palindrome banane se bach raha hai
            if(!memcmp(s.c_str()+0, rev.c_str() + i, s.length()-i)){
                return rev.substr(0, i) + s;
            }
        }

        return rev+s;
 }
int main() {
    string s = "aacecaaa";
    // cout << "ShortestPalindrome: " << ShortestPalindrome(s) << endl;
    cout << "ShortestPalindrome: "<<shortestPalindrome_memcmp(s);
    return 0;
}
