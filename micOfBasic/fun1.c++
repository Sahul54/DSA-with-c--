#include <iostream>

using namespace std;

int main() {
    int ascii_values[] = {105, 32, 108, 111, 118, 101, 32, 117, 32, 3, 32, 112, 114, 105, 110, 99, 101, 115};
    
   cout << "Message: ";
    for (int i = 0; i < sizeof(ascii_values) / sizeof(ascii_values[0]); ++i) {
        cout << static_cast<char>(ascii_values[i]);
    }
    
   cout << endl;
    
    return 0;
}
