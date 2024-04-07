#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int size){
    int left = 0;
    int right = size-1;

    while(left<= right){
      swap(arr[left],arr[right]);
      left++;
      right--;
    }
    for (int i = 0; i < size; i++)
    {
      cout<<arr[i];
    }
  } 
int main(){

  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int size = sizeof(arr)/4;
  
  reverseArray(arr, size);

//   while(left<=right)
  // for(int left = 0, right = size-1; left <= right; left++, right--)
  // {
  //   swap(arr[left], arr[right]);
  //   left++;
  //   right--;
  // }

  // for (int i = 0; i < size; i++)
  // {
  //   cout<<arr[i];
  // }
  
  
  return 0;
}
