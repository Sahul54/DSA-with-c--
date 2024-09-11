#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

    // Function to sort the unordered_map by value
    vector<pair<string, int>> sortByValue(unordered_map<sstring, int>& map) {
    // Create a vector of pairs and copy elements from the map
    vector<pair<string, int>> vec(map.begin(), map.end());

    // Sort the vector by the second element (value) of the pairs
    sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second; // Sort in ascending order of value
    });

    return vec;
}

int main() {
    // Sample unordered_map
    unordered_map<string, int> myMap = {
        {"apple", 2},
        {"banana", 3},
        {"orange", 1},
        {"mango", 4},
        {"grapes", 2}
    };

    // Sort the map by value
    vector<pair<string, int>> sortedMap = sortByValue(myMap);

    // Print the sorted map
    for (const auto& pair : sortedMap) {
        cout << pair.first << ": " << pair.second <<endl;
    }

    return 0;
}
