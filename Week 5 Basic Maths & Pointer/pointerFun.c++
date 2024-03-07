#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int size){  // Pass by arr[] in address of arr 
   cout<<"size of this value : "<< sizeof(arr)<<endl;  // size of address
  //  cout<<arr[0];

  cout<<"arr : "<<arr<<endl;
  cout<<"&arr :"<<&arr<<endl; // differ  -> fun mai entarire array ka address pass hota h, or ye address ko store krne k aapna addres ho ga , so iska address differ krgega
  
}
int main()
{
  int arr[] = {10,20,30,40,50};
  // cout<<"size of array : "<<sizeof(arr)<<endl;
  // cout<<arr[0]<<endl;
  cout<<"arr : "<<arr<<endl;
  cout<<"&arr : "<<&arr<<endl;

  solve(arr,4);
    return 0;
}