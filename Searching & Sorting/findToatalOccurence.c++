#include<iostream>
using namespace std;


int findFirstOccurence(int arr[], int target, int n){
  int s = 0;
  int e = n-1;
  // int mid = (s+e)/2;  //overflow
  int mid = (s +(e-s))/2;
  int ans = -1;

  while (s<=e)
  {
    if (arr[mid]== target)
    {
      // ans
      ans = mid;
      // left mai aa jawo
      e = mid-1;

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

int findTotaltOccurence(int arr[], int target, int n){
  int firstOcc = findFirstOccurence(arr, target, n);
  int lastOcc = findLastOccurence(arr, target, n);
  int totalOcc = lastOcc- firstOcc+1;
  return totalOcc;
  
}
int main()
{   int arr[] = {30,30,30,30,30,30,40,50,60};
    int target = 30;
    int n = 9;
    int ans = findTotaltOccurence(arr, target, n);
    cout<<"Total occ is: "<<ans;
    return 0;
}