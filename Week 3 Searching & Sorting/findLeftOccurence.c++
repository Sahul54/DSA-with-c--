#include<iostream>
using namespace std;

int findLastOccurence(int arr[], int target, int n){
  int s = 0;
  int e = n-1;
  // int mid = (s+e)/2;  //overflow
  int mid = (s +(e-s))/2;
  int ans = -1;

  while (s<=e)
  {
    if (arr[mid]== target)
    {
      // ans store
      ans = mid;
      // right mai aa jawo
      s = mid+1;

    }
    else if (target > arr[mid])
    {
      // right mai aa ajawo
      s = mid + 1;

    }
    else if (target< arr[mid])
    {
      // left mai aa jawo
      e = mid -1;

    }
    // yaha akhar galt hoti h
    mid = (s+e)/2;
   
  }
  
}

int main()
{
  int arr[]= {10,30,30,30,30,30,50,60,70};
  int n = 9;
  int target = 30;

  int ans = findLastOccurence(arr, target, n);
  if (ans == -1)
  {
    cout<<"Element is not found"<<endl;
  
  }
  else{
    cout<<"Element is found at index : " << ans << endl;
  }

    return 0;
}