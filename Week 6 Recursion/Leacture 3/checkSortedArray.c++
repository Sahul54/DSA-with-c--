#include<bits/stdc++.h>
using namespace std;

bool checkSortedArr(int arr[], int size, int index){
  // base case
  if(index >= size) return true;

  // Process case
  if(arr[index] > arr[index - 1]){
    // aage check krna padega ab

    // recursion check karega
  bool ans = checkSortedArr(arr, size, index + 1);
  return ans;
  }
  else{
    return false;
  }
   
}
int main()
{
  int arr[] = {1,2,3,1,4,5,6};
  int size = 6;
  int index = 1;
bool isSort = checkSortedArr(arr, size, index);
// cout<<checkSortedArr;

  if(isSort){
     cout<<"Array is sortred"<<endl;
  }
  else{
    cout<<"Array is not sortred"<<endl;
  }

    return 0;
}