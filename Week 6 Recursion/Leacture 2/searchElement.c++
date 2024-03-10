#include<bits/stdc++.h>
using namespace std;

bool searchElement(int arr[], int size, int index, int target){
  // base case
  if(index >= size) return false;

  // process case yaha khudh sy kr raha rhu
  if(arr[index] == target) return true;
  
  
  // recusive case
  bool aagekaAns = searchElement(arr, size, index + 1, target);
  return aagekaAns;
}

int findElement(int arr[], int size, int index, int target){
  // base case
  if(index >= size) return -1;

  // process case yaha khudh sy kr raha rhu
  if(arr[index] == target) return index;
  
  // recusive case
  findElement(arr, size, index + 1, target);
 
}
int main()
{
  int arr[] = {1,2,3,4,5,6,7,8};
  // cout<<arr[7];
  int size = 8;
  int index = 0;
  int target = 8;

  // cout<<"Element is found or not : "<<searchElement(arr, size, index, target);
  cout<<"Index is : "<<findElement(arr, size, index, target);
    return 0;
}