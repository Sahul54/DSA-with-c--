#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e , int target){
  // base case
  if(s>e) return -1;

  // processing
  int mid = s + (e-s)/2;
  
  // kudh kro
  if(arr[mid] == target){
    return mid;
  }

  // baki recrsion dekh le ga
  if(arr[mid] < target){
    // right move
    // s = mid + 1;
    return binarySearch(arr, mid+1, e, target);
  }
  else{
    // move left
    // e = mid - 1;
    return binarySearch(arr, s, mid-1, target);
  }
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  int size = 5;
  int target = 40;
  int s = 0;
  int e = size -1;

  int findIndex = binarySearch(arr, s, e, target);

  if(findIndex != -1){
      cout<<"target element at : "<<findIndex<<endl;
  }
  else{
        cout<<"target element not found : "<<findIndex<<endl;
  }
    return 0;
}