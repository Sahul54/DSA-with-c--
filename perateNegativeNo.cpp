// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr = {-5,-7,6,-2,8,9,9};
//     int n = arr.size();
//     sort(arr.begin(), arr.end());

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {-3,5,-5,-7,7,8,7,-5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int i = 0;
    int j = 0;
    while (i<n){
    if(arr[i] > 0){
        i++;
    }
    else{
        swap(arr[i], arr[j]);
        i++;
        j++;
    }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
  return 0;
}