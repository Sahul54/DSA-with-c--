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
    // create vector
    vector<int> v;

    // Initilize
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);

    // cout<<"Size of : "<<v.size()<<endl;
    // cout<<"Capacity of : "<<v.capacity()<<endl;
   
    // int n;
    // cin>>n;
    // vector<int>v1(n,1);
    // cout<<"Size of : "<<v1.size()<<endl;
    // cout<<"Capacity of : "<<v1.capacity()<<endl;

    vector<int>v1 = {1,2,4,53,45};

    // Iterator
    // for(auto it = v1.begin(); it != v1.end(); it++){
    //   cout<<*it<<" ";
    // }

    // Reverse Iterator
    // for(auto it = v1.rbegin(); it != v1.rend(); it++){
    //   cout<<*it<<" ";
    // }

    // Fornt. Back, at, empty, clear
    // cout<<"Front: "<<v1.front()<<endl;
    // cout<<"Back: "<<v1.back()<<endl;
    // cout<<"empty: "<<v1.empty()<<endl;
    // cout<<"AT: "<<v1[2]<<endl;
    // v1.clear();
    // cout<<"empty: "<<v1.empty()<<endl;

    // Sorting
    // sort(v1.begin(), v1.end());

    // Sorting in Increasing order
    // for(auto i =0; i<v1.size(); i++){
    //   cout<<v1[i]<<" ";
    // }

    // Sorting in decreasing order
    // sort(v1.begin(), v1.end(), greater<int>());
    // for(auto i: v1){
    //   cout<<i<<" ";
    // }

    // cout<<endl;

    // Searching
    // Search in binary search
    cout<<binary_search(v1.begin(), v1.end(),4)<<endl;

    // find Index
    cout<<find(v1.begin(), v1.end(), 53) - v1.begin();

















  // vector like a array but vector store in dynamic size-----------
  // 
    
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

    // vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // for(int i = 0; i<vec.size(); i++){
    //   cout<<vec[i]<<" ";
    // }
    // // cout<<sizeof(vec);
    // cout<<endl<<vec.size()<<endl;

    // vec.pop_back();
    // for(int i = 0; i<vec.size(); i++){
    //   cout<<vec[i]<<" ";
    // }
    // cout<<endl<<vec.size()<<endl;

    // // resize()
    // vec.resize(6);
    // for(int i = 0; i<vec.size(); i++){
    //   cout<<vec[i]<<" ";
    // }

    // // begin()
    // cout<<endl<<*(vec.begin())<<endl;

    // // end
    //  cout<<*(vec.end())<<endl;

    // // cout<<end(vec)- begin(vec)<<endl;
    
    // //  clear()
    // vec.clear();

    // // empty()
    // if( vec.empty()){
    //   cout<<"empty" <<endl;
    // }
    // else{
    //   cout<<"Not empty"<<endl;
    // }
    // cout<<"vec size of is: "<<vec.size()<<endl;
    
    return 0;
}