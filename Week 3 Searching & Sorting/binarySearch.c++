#include<iostream>
using namespace std;

int foundElement(int arr[], int target, int n){
  int start= 0;
  int end = n-1;
  int mid = (start + end)/2;  //find mid
  
  while (start<= end)
  {  
    // agr value found huwa to index return kr dega
    if (arr[mid] == target)
    {
      return mid;
    }
    
    // agr value found nhi huwa to... agr target mid se bada h to...to start right mai aajawo
    else if (target > arr[mid])
    {
      start = mid+1;
    }
  
     // agr value found nhi huwa to... agr target mid se chhota h to...to end left mai aajawo
    else if (target < arr[mid])
    {
      end = mid-1;
    }
     // yaha akhar galti hota hai 
    // mid update
    mid = (start + end)/2;
    
  }

  return -1;
  
}

int main()
{  
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target = 8;
    int n = 9;

    int ans = foundElement(arr, target, n);
    
    if (ans == -1)
    {
      cout<<"Element is not found" << endl;
    }
    else{
      cout<<"Element is found at index: " << ans << endl;
    }


    return 0;
}