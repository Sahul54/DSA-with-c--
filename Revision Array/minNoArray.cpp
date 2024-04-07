#include<bits/stdc++.h>
using namespace std;

void findMaxNo(int arr, int size){
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxAns)
        {
            maxAns = arr[i];
        }
        
    }
    cout<<maxAns;
}

void findMinNo(int arr, int size, int minAns){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > minAns)
        {
            minAns = arr[i];
        }
        
    }
    cout<<minAns;
}


int main(){
    int arr[] = {12, 3, 5, 45, 6, 66, 7};
    int size = sizeof(arr)/4;
    int minAns = INT_MAX;
    
    findMaxNo(arr, size);
    // findMinNo(arr, size, minAns);



    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] > maxAns)
    //     {
    //         maxAns = arr[i];
    //     }
        
    // }
    // cout<<maxAns;
    
  return 0;
}