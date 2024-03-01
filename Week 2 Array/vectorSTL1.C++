#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
   cout<< "vector element: " ;
  int size = v.size();
  for (int i = 0; i < size; i++)
  {
    cout<< v[i]<<" ";
  }
  cout<<endl;
}
int main(){
  vector<int>v;  // like arary
  
  //  while (1)
  //  {
  //   int d;
  //   cin>>d;
  //   v.push_back(d);
  //   cout<<"capacity: "<<v.capacity()<< v.size()<<endl;
  //  }
   
  // // insert data
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);

  //  print(v);

  //  //pop -> delete   -->always back
  //  v.pop_back();
  //  print(v);

  //  v.pop_back();
  //  print(v);

  // //  v.pop_back();
  // //  print(v);

  // //  v.pop_back();
  // //  print(v);

  int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
    int d;
    cin>>d;
    v.push_back(d);

   }
   
   print(v);
   for (int i = 0; i < 10; i++)
   {
    v.push_back(10);
   }
   print(v);  

  //  celar the vector all element

  v.clear();
  v.push_back(52);
  print(v);
   
}