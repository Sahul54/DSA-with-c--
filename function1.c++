#include<iostream>

using namespace std;

// void piyar(){

//   for (int i = 0; i < 10; i++)
//   {
//   cout<< i << " sundar ko sundari ko piyar ho gya" <<endl;  /* code */
//   }
  
// }


 int main(){

 
    // ASCII values of the characters in the message
    int message[] = {77, 101, 114, 105, 32, 112, 105, 121, 97, 114, 105, 32, 80, 114, 105, 110, 99, 101, 115, 115, 32, 75, 104, 97, 121, 97, 108, 32, 82, 97, 107, 104, 110, 97, 32, 111, 114, 32, 107, 97, 98, 104, 105, 32, 116, 111, 32, 98, 104, 105, 99, 104, 97, 107, 32, 99, 97, 108, 108, 32, 107, 105, 106, 105, 121, 101, 32, 103, 97, 32, 80, 114, 105, 110, 99, 101, 115, 115, 44, 32, 73, 32, 76, 111, 118, 101, 32, 117, 32, 109, 101, 114, 105, 32, 112, 105, 121, 97, 114, 105, 32, 80, 114, 105, 110, 99, 101, 115, 115, 100};

    // Print the message
    for(int i = 0; i < sizeof(message) / sizeof(message[0]); ++i) {
        std::cout << char(message[i]);
    }

   

//   piyar();

return 0;
}