#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<vector<int> > arr(5, vector<int>(10, 9));

  // for (int i = 0; i < arr.size(); i++)
  // {
  //   for (int j = 0; j < arr[i].size(); j++)
  //   {
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  vector<vector<int> > arr1;

  vector<int> vec1(10,1);
  vector<int> vec2(6,1);
  vector<int> vec3(2,6);
  vector<int> vec4(10,1);
  vector<int> vec5(5,8);

  arr1.push_back(vec1);
  arr1.push_back(vec2);
  arr1.push_back(vec3);
  arr1.push_back(vec4);
  arr1.push_back(vec5);

   for (int i = 0; i < arr1.size(); i++)
  {
    for (int j = 0; j < arr1[i].size(); j++)
    {
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }

  
  
    return 0;
}