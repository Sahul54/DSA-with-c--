#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr, int n){
    for(int i =0; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }
}
int main(){
    vector<int> arr = {6,5,4,3,2,1};
    int n = arr.size();

    insertionSort(arr, n);

    for(auto & it: arr){
        cout<<it<<" ";
    }
  return 0;
}