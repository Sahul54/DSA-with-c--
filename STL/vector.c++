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
    
    // vector<int> arr;
    // int n; 
    // cout << "enter the size of vector : 101";
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //   int x;
    //   cin>>x;
    //   arr.push_back(x);
    // }

    // printVec(arr);

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    for(int i = 0; i<vec.size(); i++){
      cout<<vec[i]<<" ";
    }
    // cout<<sizeof(vec);
    cout<<endl<<vec.size()<<endl;

    vec.pop_back();
    for(int i = 0; i<vec.size(); i++){
      cout<<vec[i]<<" ";
    }
    cout<<endl<<vec.size()<<endl;

    // resize()
    vec.resize(6);
    for(int i = 0; i<vec.size(); i++){
      cout<<vec[i]<<" ";
    }

    // begin()
    cout<<endl<<*(vec.begin())<<endl;

    // end
     cout<<*(vec.end())<<endl;

    // cout<<end(vec)- begin(vec)<<endl;
    
    //  clear()
    vec.clear();

    // empty()
    if( vec.empty()){
      cout<<"empty" <<endl;
    }
    else{
      cout<<"Not empty"<<endl;
    }
    cout<<"vec size of is: "<<vec.size()<<endl;
    
    return 0;
}