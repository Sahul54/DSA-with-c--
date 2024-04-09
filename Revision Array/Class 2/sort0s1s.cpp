#include<bits/stdc++.h>
using namespace std;

void sortZeroOne(int arr[], int size){

    // two pointer=================
    // int left = 0;
    // int right = size -1;

    // while (left<right)
    // {
    //     while (left <right && arr[left] == 0)
    //     {
    //         left++;
    //     }

    //     while (left<right && arr[right] == 1)
    //     {
    //         right--;
    //     }
    //     if (left<right && arr[left] == 1 && arr[right] == 0)
    //     {
    //         swap(arr[left], arr[right]);
    //         left++;
    //         right--;
    //     }
         
    // }
    
    
    //  --------Counting-----------
    int zeroCount = 0;
    int oneCount = 1;

    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }

    // int i;
    // for(i = 0; i<zeroCount; i++){
    //     arr[i] = 0;
    // }
    // for(int j = i; j<size; j++){
    //     arr[j] = 1;
    // }

    
//    cout<<zeroCount;
    int i = 0;
    while(zeroCount--)
    {
        arr[i] = 0;
        i++;
    }
    while(oneCount--)
    {
        arr[i] = 1;
        i++;
    }
   
}
int main(){
    int arr[] = {1,1,1,0,0,0,1,1,0};
    int size = 9;

    sortZeroOne(arr, size);
     
    // sort(arr.begin(), arr.end()); 

    for (int i = 0; i < size; i++)
    {    
        cout<<arr[i]<<" ";
    }
  return 0;
}