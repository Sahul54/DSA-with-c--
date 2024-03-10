#include<bits/stdc++.h>
using namespace std;

void findMinNo(int arr[], int size, int index, int &mini){
  // base case
  if(index >= size) return;

  // processing
  mini = min(mini, arr[index]);
  
  // recursive case
  findMinNo(arr, size, index+1, mini);
}

int main()
{
  int arr[] = {1,2,3,4,5,6,0,8};
  int size = 8;
  int index = 0;
  int mini = INT_MAX;
  findMinNo(arr,size,index, mini);
  cout<<"minimum no is : "<<mini;
    return 0;
}