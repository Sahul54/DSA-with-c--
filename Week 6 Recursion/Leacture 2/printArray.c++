#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size, int index){
  // base case
  if(index >= size) return;

  //Processing
  cout<<arr[index]<<" ";

  // recursive case
  printArray(arr, size, index + 1);

  //  //Processing
  // cout<<arr[index]<<" ";

}
int main()
{
  int arr[] = {1,2,3,4,5,6,7,8};
  int size = 8;
  int index = 0;
  printArray(arr, size, index);
    return 0;
}