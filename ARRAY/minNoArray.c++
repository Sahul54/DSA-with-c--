#include<iostream>
#include<limits.h>

using namespace std;

int minNum(int arr[], int size){
  int minAns = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i]<minAns)
    {
      minAns = arr[i];
    }
    
  }
  return minAns;
}

int main(){

  // cout<<INT_MIN <<endl; //  Value = -2147483648
  //  cout<<INT_MAX <<endl; // Value = 2147483647

  int arr[] = {12,34,5,6,664,1,6,7,0};
  int size = 9;

  int minnumber = minNum(arr, size);
  cout<<"minimum no is :"<< minnumber;
} 