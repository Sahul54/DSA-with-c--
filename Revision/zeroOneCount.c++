#include<bits/stdc++.h>
using namespace std;

void count(int arr[], int n){
 int zeroCount = 0;
 int oneCount = 0;

 for (int i = 0; i < n; i++)
 {
  if(arr[i] == 0){
    zeroCount++;
  }
  if(arr[i] == 1){
    oneCount++;
  }
 }

 cout<<zeroCount<<endl;
 cout<<oneCount;
 
}
int main()
{
  int arr[] = {0,0,1,1,0,1,0,1,1};
  int n = 9;
  count(arr,n);
    return 0;
}