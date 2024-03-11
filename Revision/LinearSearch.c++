#include<bits/stdc++.h>
using namespace std;

bool found(int arr[], int n, int target, int flag){
  // for (int i = 0; i < n; i++)
  // {
  
    //  baase case
    if(n < flag)
    { 
      return false;
    cout<<flag;
    }
    
    if (arr[flag] == target)
    {
      return true;
    }
    // else return false;
     

     found(arr, n, target, flag+1);

    
  // }
  
}

int main()
{
  int arr[] = {1,2,3,4,5,6};
  int n = 6;
  int target = 0;
  int flag = 0;


 bool ans = found(arr, n, target, flag);
 cout<<ans;

 if (ans == 1)
 {
  cout<<"found";
 }
 else{
  cout<<"not found";
 }
 

  // for(int i = 0; i<n; i++){
  //   if(arr[i] == target){
  //     // return true;
  //     flag = 1;
  //   } 
  //   // else{
  //   //   return false;
  //   // } 
  // }

  // if(flag == 1){
  //   cout<<"yes";
  // }
  // else{
  //   cout<<"no";
  // }
  

  
    return 0;
}