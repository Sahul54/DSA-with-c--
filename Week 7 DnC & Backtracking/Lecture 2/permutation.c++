#include<bits/stdc++.h>
using namespace std;

void printPermutaion(string& str, int index){
  // base case
  if(index >= str.length()){
    cout<< str<<endl;
    return;
  }

  for (int j = index; j < str.length(); j++)
  {
    swap(str[index], str[j]);

    // recursion
    printPermutaion(str, index+1);

    // backtracking
    swap(str[index], str[j]);
  }
  
}

int main()
{
  string str = "abd";
  int index = 0;
      printPermutaion(str, index);
    return 0;
}