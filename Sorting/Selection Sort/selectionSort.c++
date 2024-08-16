#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int index = i; 
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}
int main(){
    int arr[] = {2,5,1,4,3};
    int n = sizeof(arr)/4;
    
    selectionSort(arr, n);

    cout<<"Selection Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}