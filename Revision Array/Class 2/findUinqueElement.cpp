#include<bits/stdc++.h>
using namespace std;

int findUniqueNo(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
    
}
int main(){
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int size = 9;
    int finalAns = findUniqueNo(arr, size);
    cout<<"Unique Element: "<<finalAns;
  return 0;
}