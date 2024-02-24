#include<bits/stdc++.h>
using namespace std;

int SearchOnNearlySortdArray(int arr[], int n, int target){
  int s = 0;
  int e = n-1;
  int mid = s - (e-s)/2;

  while (s <= e)
  {
    if(mid -1 >= 0 && arr[mid-1]== target){
    return mid-1;
  }
  if(arr[mid] == target){
    return mid;

  }
  if(arr[mid+1] == target){
    return mid+1;
  }

  if (target > arr[mid])
  {
    // right mai jao
    s = mid + 2;

  }
  else{
    // left mai jao
    e = mid - 2;
  }
   mid = s + (e- s)/2;
  }
 
  return -1;
  
}
int main()
{
    int arr[] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;
    int target = 10;
    
    int foundIndex = SearchOnNearlySortdArray(arr, n , target);

    if (foundIndex == -1)
    {
      cout<<"Element is not found"<<endl;
    }

    else{
      cout<<"Element is found at index: "<< foundIndex <<endl;
    }
    


    return 0;
}