#include<iostream>
using namespace std;

void swiftNegativeOneSide(int arr[], int n){
  int j= 0;  //j-> entire arry trave krane k liye

  for (int i = 0; i < n; i++)
  {
    if(arr[i]<0){
      swap(arr[i], arr[j]);
      j++;
    }
  }
  

}

int main()
{  
    int arr[] = {10, -2, 4, 5, -6, -7, 8};
    int n = 7;
    
    swiftNegativeOneSide(arr, n);
    
    cout<<"Seprating array : ";
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    
    return 0;
}