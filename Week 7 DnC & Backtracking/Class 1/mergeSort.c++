#include<bits/stdc++.h>
using namespace std;

void mergeSort(int arr[], int s, int e){
  // base case
  // invalid array
  if(s>e) return;

  // single element array
  if(s==e) return;

  // break
  int mid = (s+e)/2;

  // left
  mergeSort(arr, s, mid);

  // right
  mergeSort(arr, mid+1, e);

  // merge
  merge(arr,s,e,mid);


}
int main()
{
  int arr[] = {4,5,7,8,1,3,2,5};
  int size = 8;
  int s = 0;
  int e = size - 1;

  mergeSort(arr, s, e);

    return 0;
}