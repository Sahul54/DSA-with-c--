#include<iostream>

using namespace std;

void reverseArray(int arr[], int size){
  int left=0;
  int right= size-1;

  // while (left<=right)
  // {
  //   swap(arr[left], arr[right]);
  //   left++;
  //   right--;
  // }

  for (int left = 0, right = size-1; left <= right; left++, right--)
  {
    swap(arr[left], arr[right]);
  }
  
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}


void extremPrint(int arr[], int size){
  int left=0;
  int right= size-1;

  while (left<=right)
  {
    if (left== right)
    {
     cout<<arr[left]<< " ";
    }
    else{
     cout<<arr[left]<< " ";
     cout<<arr[right]<< " ";
    }
    left++;
    right--;
  }
  
}
int main(){
  // int arr[6] = {10,20,30,40,50,60};
  // int size = 6;  // even case--------

  // int arr[7] = {10,20,30,40,50,60,70};
     int arr[4] = {10,20,30,40};

  int size = 4; // odd case---------
  // reverseArray(arr, size);

  extremPrint(arr, size);


}
