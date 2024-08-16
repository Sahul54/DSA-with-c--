#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

// Function to sort the unordered_map by value
std::vector<std::pair<std::string, int>> sortByValue(std::unordered_map<std::string, int>& map) {
    // Create a vector of pairs and copy elements from the map
    std::vector<std::pair<std::string, int>> vec(map.begin(), map.end());

    // Sort the vector by the second element (value) of the pairs
    std::sort(vec.begin(), vec.end(), [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b) {
        return a.second < b.second; // Sort in ascending order of value
    });

    return vec;
}

int main() {
    // Sample unordered_map
    std::unordered_map<std::string, int> myMap = {
        {"apple", 2},
        {"banana", 3},
        {"orange", 1},
        {"mango", 4},
        {"grapes", 2}
    };

    // Sort the map by value
    std::vector<std::pair<std::string, int>> sortedMap = sortByValue(myMap);

    // Print the sorted map
    for (const auto& pair : sortedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
