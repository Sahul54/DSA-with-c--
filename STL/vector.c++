#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> arr){
  cout << "size: " << arr.size() << endl;
   for (int i = 0; i < arr.size(); i++)
   {
    cout<<arr[i] << " ";
   }
   
}

int main()
{   
  // vector like a array  but vector store in dynamic size-----------
    
    vector<int> arr;
    int n; 
    cout << "enter the size of vector : 101";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin>>x;
      arr.push_back(x);
    }

    printVec(arr);
    

    
    return 0;
}