#include <iostream>
#include <string>
using namespace std;

bool ismatch(const string& text, const string& pattern, int i, int j) {
    if (i == text.length() && j == pattern.length()) {
        return true;
    }

    if (j == pattern.length()) {
        return false;
    }

    if (i == text.length()) {
        while (j < pattern.length() && pattern[j] == '*') {
            j++;
        }
        return j == pattern.length();
    }

    // Handle pattern characters
    if (pattern[j] == '?' || pattern[j] == text[i]) {
        return ismatch(text, pattern, i + 1, j + 1);
    }

    if (pattern[j] == '*') {
        return ismatch(text, pattern, i, j + 1) || ismatch(text, pattern, i + 1, j);
    }

    // No match
    return false;
}

bool ismatch(const string& text, const string& pattern) {
    return ismatch(text, pattern, 0, 0);
}

int main() {
    string text = "add.bcde";
    string pattern = "a?c*";
    
    cout << "Test case1: " << (ismatch(text, pattern) ? "yes" : "no") << endl;
    
    return 0;
}
