#include<iostream>

using namespace std;

void sortZeroone(int arr[], int n){
   int zeroCount = 0;
   int oneCount=  0;

   // step 1: count 0 and 1

   for (int  i = 0; i < n; i++)
   {
    if (arr[i]== 0)
      zeroCount++;
    if (arr[i]==1)
      oneCount++;
   }

  //  stpe 2: place of all zero first
  //   int i;
  //   for (i = 0; i < zeroCount; i++)
  //   {
  //     arr[i] = 0;
  //   }
  // // stpe 2: place of all zero first
  //   for (int j = i; j< n; j++)
  //   {
  //     arr[j] = 1;
  //   }

  // Esay way 
  int index = 0;
  while (zeroCount--)
  {
    arr[index]= 0;
    index++;
  }
  
  while (oneCount--)
  {
    arr[index] = 1;
    index++;
  }
  
   
}

int main(){

  int arr[] ={0,1,0,1,0,0,1,0,0,0,1,1,0,0};
  int n =14;

  sortZeroone(arr, n);

  // Print the array
  for (int i = 0; i < n; i++)
  {
    cout<< arr[i]<<" ";
  }
  

}