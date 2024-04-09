#include<bits/stdc++.h>
using namespace std;

void siftArray(int arr[], int size){
    // // step 1
    // int temp = arr[size-1];

    // // step 2
    // // sift --> arr[i] = a[i-1]
    // for (int i = size; i >= 1; i--)
    // {
    //     arr[i] = arr[i-1];
    // }
    
    // // step 3
    // arr[0]= temp;

// left to right--------------------
    // step 1
    int temp = arr[0];

    // step 2
    // sift --> arr[i] = a[i-1]
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    
    // step 3
    arr[size-1]= temp;
}
int main(){
    int arr[] = {1,22,3,4,5,6};
    int size = 6;

    siftArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
  return 0;
}