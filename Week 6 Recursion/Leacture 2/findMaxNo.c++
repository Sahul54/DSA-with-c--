#include<bits/stdc++.h>
using namespace std;

void findMaxNo(int arr[], int size, int index, int &maxi){
// base case
if(index >= size) return;

// process case
maxi = max(arr[index],maxi);
// cout<<"Largest no is: "<<maxi;

// recursive call
findMaxNo(arr,size, index + 1, maxi);
}

int main()
{
  int arr[] = {1,2,3,4,5,6,0,8};
  int size = 8;
  int index = 0;
  int maxi = INT_MIN;
  findMaxNo(arr, size, index, maxi);
  cout<<"Largest no is: "<<maxi;
    return 0;
}