#include<bits/stdc++.h>
using namespace std;
 
int findOddOccuringElement(int arr[], int n){
  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;

  while (s <= e)
  {
    // single element
    if (s == e)
    {
      return s;
    }

    // mid cheack --> even or odd

    if(mid & 1){  // mid & 1 ka mtlb ---> true de raha ha i to --> odd number mai ho
         if(mid - 1 >= 0 && arr[mid-1] == arr[mid]){
          // right mai jao
          s = mid + 1;
         }
         else{
          // left mai jao
          e = mid - 1;
         }
    }
    else
    {
      // even
      if (mid +1 <n && arr[mid] == arr[mid+1])
      {
        // right mai jao
        s = mid + 2;

      }
      else{
        //  ya to right mai khada hu
        //  ya to ans mai khada hu
        // that's why e = mid kra hu
        // kyuki e = mid -1 se ans lost ho jye ga

        e = mid;
      }
      
    }
    mid = s+ (e-s)/2;

  }
  
}
int main()
{   
    int arr[] = {10,10,2,2,3,3,4,4,5,5,6,6,8};
    int n = 13;

    int ansIndex = findOddOccuringElement(arr, n);
    cout<<"Ans is : "<< arr[ansIndex] <<endl;
    return 0;
}