#include<bits/stdc++.h>
using namespace std;

void dubbleOfElement(int arr[], int size, int index){
  // base case
  if(index >= size) return;

  // processing case
  arr[index] = arr[index]*2;
  cout<<arr[index]<<" ";

  // recursive call
  dubbleOfElement(arr, size, index+1);
}

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8};
  int size = 8;
  int index = 0;

  dubbleOfElement(arr, size, index);
  
    return 0;
}